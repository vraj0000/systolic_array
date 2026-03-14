# Systolic Array Accelerator on Basys 3

A 16x16 systolic array that does matrix multiplication on a Basys 3 FPGA. You send matrices from a PC over UART, it multiplies them, and sends the result back. The compute core runs at 120 MHz and the UART side runs at 96 MHz with a handshake to cross the clock boundary safely.

Throughput is 1.2 MBPS using the ftd2xx library at 12 MBaud with 8x oversampling, clocked by a PLL at 96 MHz.

---

## How It Works

The design splits into two clock domains:

- **96 MHz domain** — handles UART RX/TX and unpacking the incoming byte stream
- **120 MHz domain** — runs the systolic array and accumulates results

Data crosses the boundary via a 2-stage synchronizer handshake. When `data_ready_96` goes high, it propagates through the synchronizer, gets captured in the 120 MHz domain, triggers an `ack100` back to the 96 MHz side, and resets the counter for the next byte.

![CDC Handshake](images/120-96_cdc.bmp)

The array itself is controlled by an FSM with four states: `IDLE → LOAD → COMPUTE → DONE`.

![FSM Diagram](images/systolic_fsm.bmp)

---

## Module Hierarchy

```
top
├── top_systolic (120 MHz)
│     ├── control
│     └── compute
│           ├── systolic_array
│           │     └── PE (16x16 grid, DSP-backed MACs)
│           ├── feeder
│           └── D-FlipFlop (pipeline registers)
└── top_unpacker (96 MHz)
      ├── control_unpack_96
      │    └── unpacker
      ├── control_unpack_100
      └── two_stage_sync
```

---

## Key Numbers

| Parameter | Value |
|---|---|
| Array size | 16x16 |
| Compute clock | 120 MHz |
| UART clock | 96 MHz |
| UART baud rate | 12 MBaud |
| Throughput | 1.2 MBPS |
| WNS (after optimization) | +0.171 ns |
| On-chip power | 0.303 W |
| Target device | Basys 3 (Artix-7) |

Timing started at WNS = -0.261 ns and closed at +0.171 ns. The main fix was setting `max_fanout = 64` on `rx_ready`, which was fanning out to 4097 endpoints and blowing the timing budget on those paths. After constraining it, slack on those inter-clock paths dropped from ~6.5 ns to ~4.8 ns and everything met timing.

---

## Getting Started

### Prerequisites

- Vivado (tested on the version bundled with Basys 3 support)
- Python with `ftd2xx` installed for the host-side script
- Basys 3 connected via USB

### Synthesize and Program

1. Open Vivado and create a new project targeting the Basys 3 (xc7a35tcpg236-1)
2. Add all sources from `src/` and set `top.v` as the top module
3. Add the XDC constraints file from `systolic/`
4. Run synthesis → implementation → generate bitstream
5. Program the device

### Running a Matrix Multiplication

The host-side interface is a C program using the ftd2xx library. It opens the FTDI device, configures it at 12 MBaud, sends the input bytes, and reads the result back.

```bash
gcc -o uart_read /src/C/uart.c -lftd2xx
./uart_read
```

Input is two NxN matrices packed as 8-bit integers. The current test in `uart_host.c` sends an 8-byte sequence (a 2x2 test case) and prints the received bytes. To run a 16x16 multiplication, replace `pattern1` with your serialized matrix data and update the read/write lengths.

---

## Verification

The design was verified on hardware using Vivado ILA. Captures confirm:

![ILA Capture](images/pc_side.bmp)

- Byte stream unpacking and state transitions (IDLE → LOAD → COMPUTE → DONE) work correctly at full speed
- The CDC handshake holds: `data_ready_96` asserts, crosses the synchronizer, `ack100` fires back, counter resets cleanly
- Output values match expected results for both 2x2 and 16x16 test cases

---

## Repo Layout

```
src/           RTL source files (Verilog + VHDL)
systolic/      Constraints and Vivado project files
images/        ILA captures and timing screenshots
host/          PC-side UART program (C + ftd2xx)
```

---

## Notes

- The 2x2 version was used for early bringup and is still in the repo — it's simpler to debug on the ILA
- DSP48 blocks are inferred automatically for the MAC operations; no manual instantiation needed
- If you're seeing metastability issues, double-check that the two-stage sync is on the `data_ready` path and not on the data bus itself (data is registered before the handshake, so it's stable by the time the 120 MHz domain samples it)
