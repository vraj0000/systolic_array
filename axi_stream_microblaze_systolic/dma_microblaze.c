/******************************************************************************
 * AXI DMA Simple-Mode Polling + Timing Benchmark
 * For: 2x2 (or NxN) AXI-Stream Systolic Array Matrix Multiplier
 *
 * Uses the raw XTmrCtr (AXI Timer/Counter) driver directly instead of
 * xtime_l.h, since xtime_l.h requires BSP auto-detection of a system timer
 * that isn't always picked up automatically.
 ******************************************************************************/

#include "xaxidma.h"
#include "xparameters.h"
#include "xil_cache.h"
#include "xtmrctr.h"
#include "xil_printf.h"

/************************** Constant Definitions *****************************/

#define DMA_DEV_ID          XPAR_AXIDMA_0_DEVICE_ID
#define TMR_DEV_ID          XPAR_TMRCTR_0_DEVICE_ID   /* matches xtmrctr_polled_example.c naming */
#define TMR_COUNTER_NUM     0                          /* AXI Timer has 2 counters (0 and 1); use 0 */

/* Clock frequency driving the AXI Timer, in Hz.
 * Xilinx auto-generates this in xparameters.h based on the clock wired to the
 * timer's s_axi_aclk in Vivado. If this exact macro name isn't found, search
 * xparameters.h for "TMRCTR" and "CLOCK_FREQ" to find the correct one. */
#define TIMER_CLOCK_FREQ_HZ XPAR_TMRCTR_0_CLOCK_FREQ_HZ

#define MEM_BASE_ADDR       0xC0000000
#define TX_BUFFER_BASE      (MEM_BASE_ADDR + 0x00000000)
#define RX_BUFFER_BASE      (MEM_BASE_ADDR + 0x00001000)

/* Matrix dimensions - adjust N to match your systolic array size */
#define N                   2
#define ELEM_SIZE           sizeof(u8)

/* Two 32-bit words: one packed word for matrix A, one for matrix B.
 * Each word holds all 4 u8 elements of a 2x2 matrix packed together. */
#define TX_LENGTH           (2 * sizeof(u32))
/* Result comes back as two 32-bit words, same packing scheme as TX.
 * Unpack both -- confirm with your RTL what the second word actually
 * represents (e.g. a duplicate, a wider accumulator split across words,
 * or unused padding). */
#define RX_LENGTH           (2 * sizeof(u32))

#define POLL_TIMEOUT_COUNTER    1000000U
#define NUM_RUNS                100

/************************** Variable Definitions ******************************/

static XAxiDma AxiDma;
static XTmrCtr Timer;

/*****************************************************************************/
static int PollForCompletion(XAxiDma *AxiDmaInstPtr, int Direction)
{
    int TimeOut = POLL_TIMEOUT_COUNTER;

    while (TimeOut) {
        if (!XAxiDma_Busy(AxiDmaInstPtr, Direction)) {
            return XST_SUCCESS;
        }
        TimeOut--;
    }

    return XST_FAILURE;
}

/*****************************************************************************/
/**
 * Software matmul baseline. Inputs are u8 (matching the AXI-Stream data
 * width), output is u16 since each element is a sum of 8-bit x 8-bit
 * products -- this can exceed 8 bits even for small test values, and your
 * hardware confirms it packs results as 16-bit elements too.
 */
static void SoftwareMatMul(u8 *A, u8 *B, u16 *C)
{
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            u32 sum = 0;
            for (int k = 0; k < N; k++) {
                sum += (u32)A[i * N + k] * (u32)B[k * N + j];
            }
            C[i * N + j] = (u16)sum;
        }
    }
}

/*****************************************************************************/
static void FillMatrices(u8 *A, u8 *B)
{
    u8 val = 1;
    for (int i = 0; i < N * N; i++) A[i] = val++;
    for (int i = 0; i < N * N; i++) B[i] = val++;
}

/*****************************************************************************/
/**
 * Start the free-running timer counter.
 */
static void TimerStart(void)
{
    XTmrCtr_Reset(&Timer, TMR_COUNTER_NUM);
    XTmrCtr_Start(&Timer, TMR_COUNTER_NUM);
}

/*****************************************************************************/
/**
 * Read the current counter value (ticks since TimerStart was called).
 */
static u32 TimerReadTicks(void)
{
    return XTmrCtr_GetValue(&Timer, TMR_COUNTER_NUM);
}

/*****************************************************************************/
int main(void)
{
    int Status;
    XAxiDma_Config *Config;
    u8 *TxBufferPtr = (u8 *)TX_BUFFER_BASE;
    u8 *RxBufferPtr = (u8 *)RX_BUFFER_BASE;

    double HwTotalTime = 0.0;
    double SwTotalTime = 0.0;

    u8 MatA[N * N], MatB[N * N];
    u16 MatC_sw[N * N];

    xil_printf("\r\n--- Systolic Array DMA Timing Benchmark ---\r\n");

    /* ---------------- Timer setup ---------------- */

    Status = XTmrCtr_Initialize(&Timer, TMR_DEV_ID);
    if (Status != XST_SUCCESS) {
        xil_printf("Timer initialization failed %d\r\n", Status);
        return XST_FAILURE;
    }

    /* Confirm the timer hardware itself is working before trusting any
     * measurements taken with it */
    Status = XTmrCtr_SelfTest(&Timer, TMR_COUNTER_NUM);
    if (Status != XST_SUCCESS) {
        xil_printf("Timer self-test failed %d\r\n", Status);
        return XST_FAILURE;
    }

    XTmrCtr_SetOptions(&Timer, TMR_COUNTER_NUM, XTC_AUTO_RELOAD_OPTION);

    /* ---------------- DMA setup ---------------- */

    Config = XAxiDma_LookupConfig(DMA_DEV_ID);
    if (!Config) {
        xil_printf("No config found for DMA %d\r\n", DMA_DEV_ID);
        return XST_FAILURE;
    }

    Status = XAxiDma_CfgInitialize(&AxiDma, Config);
    if (Status != XST_SUCCESS) {
        xil_printf("DMA initialization failed %d\r\n", Status);
        return XST_FAILURE;
    }

    if (XAxiDma_HasSg(&AxiDma)) {
        xil_printf("Device is configured for SG mode; this example needs Simple mode\r\n");
        return XST_FAILURE;
    }

    /* ---------------- Prepare input data ---------------- */

    FillMatrices(MatA, MatB);

    /* Your systolic_axi top module expects 32-bit stream beats, with each
     * 2x2 matrix's four u8 elements packed into a single 32-bit word.
     * Byte order assumed here: element[0] in the LSB, element[3] in the MSB.
     * If your RTL packs elements in a different order (e.g. row-major MSB
     * first), swap the shift amounts below to match. */
    u32 *TxWords = (u32 *)TxBufferPtr;
    TxWords[0] = ((u32)MatA[0])       |
                 ((u32)MatA[1] << 8)  |
                 ((u32)MatA[2] << 16) |
                 ((u32)MatA[3] << 24);
    TxWords[1] = ((u32)MatB[0])       |
                 ((u32)MatB[1] << 8)  |
                 ((u32)MatB[2] << 16) |
                 ((u32)MatB[3] << 24);

    Xil_DCacheFlushRange((UINTPTR)TxBufferPtr, TX_LENGTH);
    Xil_DCacheFlushRange((UINTPTR)RxBufferPtr, RX_LENGTH);

    /* ---------------- Hardware (systolic array) timing loop ---------------- */
    /* Broken into sub-segments so you can see where the 7.54us actually goes:
     * - Setup: time spent issuing the two SimpleTransfer register writes
     * - PollWait: time spent polling XAxiDma_Busy() until both channels finish
     * Note: PollWait includes the *real* AXI-Stream transfer time, but also
     * includes polling loop overhead (each check is an AXI-Lite register
     * read). This can't fully isolate pure wire time -- only an ILA capture
     * of TVALID/TREADY/TLAST can show that at cycle accuracy. */

    double SetupTotalTime = 0.0;
    double PollTotalTime = 0.0;

    for (int run = 0; run < NUM_RUNS; run++) {

        u32 T0, T1, T2;

        TimerStart();
        T0 = TimerReadTicks();

        Status = XAxiDma_SimpleTransfer(&AxiDma, (UINTPTR)RxBufferPtr,
                                         RX_LENGTH, XAXIDMA_DEVICE_TO_DMA);
        if (Status != XST_SUCCESS) {
            xil_printf("RX transfer setup failed %d\r\n", Status);
            return XST_FAILURE;
        }

        Status = XAxiDma_SimpleTransfer(&AxiDma, (UINTPTR)TxBufferPtr,
                                         TX_LENGTH, XAXIDMA_DMA_TO_DEVICE);
        if (Status != XST_SUCCESS) {
            xil_printf("TX transfer setup failed %d\r\n", Status);
            return XST_FAILURE;
        }

        T1 = TimerReadTicks();  /* end of register setup, start of poll wait */

        if (PollForCompletion(&AxiDma, XAXIDMA_DMA_TO_DEVICE) != XST_SUCCESS) {
            xil_printf("TX transfer timed out\r\n");
            return XST_FAILURE;
        }
        if (PollForCompletion(&AxiDma, XAXIDMA_DEVICE_TO_DMA) != XST_SUCCESS) {
            xil_printf("RX transfer timed out\r\n");
            return XST_FAILURE;
        }

        T2 = TimerReadTicks();  /* end of poll wait */

        SetupTotalTime += (double)(T1 - T0) / (double)TIMER_CLOCK_FREQ_HZ;
        PollTotalTime  += (double)(T2 - T1) / (double)TIMER_CLOCK_FREQ_HZ;
        HwTotalTime    += (double)(T2 - T0) / (double)TIMER_CLOCK_FREQ_HZ;
    }

    Xil_DCacheInvalidateRange((UINTPTR)RxBufferPtr, RX_LENGTH);

    /* ---------------- Software baseline timing loop ---------------- */

    for (int run = 0; run < NUM_RUNS; run++) {
        u32 StartTicks, EndTicks;

        TimerStart();
        StartTicks = TimerReadTicks();

        SoftwareMatMul(MatA, MatB, MatC_sw);

        EndTicks = TimerReadTicks();

        SwTotalTime += (double)(EndTicks - StartTicks) / (double)TIMER_CLOCK_FREQ_HZ;
    }

    /* ---------------- Report results ---------------- */

    double HwAvgUs = (HwTotalTime / NUM_RUNS) * 1e6;
    double SwAvgUs = (SwTotalTime / NUM_RUNS) * 1e6;
    double Speedup = SwAvgUs / HwAvgUs;

    double BytesTransferred = TX_LENGTH + RX_LENGTH;
    double ThroughputMBps = (BytesTransferred / (HwAvgUs * 1e-6)) / (1024.0 * 1024.0);

    xil_printf("\r\n--- Results (%d runs, %dx%d matrix) ---\r\n", NUM_RUNS, N, N);
    xil_printf("Hardware (DMA + systolic array) avg time: %d.%02d us\r\n",
               (int)HwAvgUs, (int)((HwAvgUs - (int)HwAvgUs) * 100));

    double SetupAvgUs = (SetupTotalTime / NUM_RUNS) * 1e6;
    double PollAvgUs = (PollTotalTime / NUM_RUNS) * 1e6;
    xil_printf("  -- Setup (register writes) avg: %d.%02d us\r\n",
               (int)SetupAvgUs, (int)((SetupAvgUs - (int)SetupAvgUs) * 100));
    xil_printf("  -- Poll-wait (transfer + poll loop) avg: %d.%02d us\r\n",
               (int)PollAvgUs, (int)((PollAvgUs - (int)PollAvgUs) * 100));
    xil_printf("  -- (Poll-wait includes real AXI transfer time, but also\r\n");
    xil_printf("      polling loop overhead -- only an ILA capture of\r\n");
    xil_printf("      TVALID/TREADY/TLAST gives true cycle-accurate wire time)\r\n");

    xil_printf("Software (MicroBlaze naive matmul) avg time: %d.%02d us\r\n",
               (int)SwAvgUs, (int)((SwAvgUs - (int)SwAvgUs) * 100));
    xil_printf("Speedup: %d.%02dx\r\n",
               (int)Speedup, (int)((Speedup - (int)Speedup) * 100));
    xil_printf("Throughput: %d.%02d MB/s\r\n",
               (int)ThroughputMBps, (int)((ThroughputMBps - (int)ThroughputMBps) * 100));

    /* Result comes back as two packed 32-bit words, each holding two 16-bit
     * elements (low half = first element, high half = second element).
     * Word 0 = C[0][0], C[0][1]. Word 1 = C[1][0], C[1][1]. */
    u32 *RxWords = (u32 *)RxBufferPtr;
    u16 MatC_hw[N * N];
    MatC_hw[0] = (u16)(RxWords[0] & 0xFFFF);
    MatC_hw[1] = (u16)((RxWords[0] >> 16) & 0xFFFF);
    MatC_hw[2] = (u16)(RxWords[1] & 0xFFFF);
    MatC_hw[3] = (u16)((RxWords[1] >> 16) & 0xFFFF);

    xil_printf("\r\nHardware result:\r\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            xil_printf("%u ", (unsigned int)MatC_hw[i * N + j]);
        }
        xil_printf("\r\n");
    }

    xil_printf("\r\nSoftware result:\r\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            xil_printf("%u ", (unsigned int)MatC_sw[i * N + j]);
        }
        xil_printf("\r\n");
    }

    xil_printf("\r\n--- Done ---\r\n");

    return XST_SUCCESS;
}
