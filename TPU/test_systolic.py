import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, ReadWrite
from cocotb.utils import get_sim_time

import numpy as np

from golden_model import sa_golden_model


async def reset(dut):
    # Set initial values for the signals.
    dut.rst.value = 1

    dut.D_a_00.value = 0
    dut.D_a_10.value = 0
    dut.D_b_00.value = 0
    dut.D_b_01.value = 0


    # Keep the reset signal high for 3 clock cycles.
    for _ in range(3):
        await RisingEdge(dut.clk)
    dut.rst.value = 0

@cocotb.test
async def systolic_compute(dut):

    cocotb.log.info("+++++++++++ Starting the %d x %d Double Buffer Multiplication +++++++++", 
                    int(dut.systolic_size.value), int(dut.systolic_size.value))
    Clock(dut.clk, 10, "ns").start()
    await reset(dut)

    sa_model = sa_golden_model()

    rng = np.random.default_rng(seed=42)
    Number_matrixs = rng.integers(1, 100) * 2
    # Number_matrixs = 3

    A = rng.integers(0, 100, size=(Number_matrixs * 2, 2))
    B = rng.integers(0, 100, size=(Number_matrixs * 2, 2))
    # A = np.full((Number_matrixs * 2, 2), 2)
    # B = np.full((Number_matrixs * 2, 2), 2)

    dut.num_matrix.value = int(Number_matrixs)
    await ReadWrite()
    cocotb.log.info("Number of Randomly Generated Matrix = %d", dut.num_matrix.value)

    dut.a_ready.value = 1
    dut.b_ready.value = 1

    sa_model.matmul(Number_matrixs, A, B)

    first_input_time = None
    first_output_time = None
    last_output_time = None

    # --- define the coroutine BEFORE calling start_soon on it ---
    async def drive_inputs():
        nonlocal first_input_time
        for i in range(0, A.shape[0], 2):
            block_A = A[i:i+2, 0:2]
            block_B = B[i:i+2, 0:2]

            dut.D_a_00.value = int(block_A[0, 0])
            dut.D_a_10.value = int(block_A[1, 0])
            dut.D_b_00.value = int(block_B[0, 0])
            dut.D_b_01.value = int(block_B[0, 1])
            if first_input_time is None:
                first_input_time = get_sim_time(unit="ns")

            await RisingEdge(dut.clk)

            dut.D_a_00.value = int(block_A[0, 1])
            dut.D_a_10.value = int(block_A[1, 1])
            dut.D_b_00.value = int(block_B[1, 0])
            dut.D_b_01.value = int(block_B[1, 1])
            await RisingEdge(dut.clk)

        dut.D_a_00.value = 0
        dut.D_a_10.value = 0
        dut.D_b_00.value = 0
        dut.D_b_01.value = 0

    cocotb.start_soon(drive_inputs())   # now this resolves correctly

    i = 0
    num_row = Number_matrixs * 2
    Test = True

    while i < num_row:
        await RisingEdge(dut.clk)
        if dut.out_c_valid.value == 1:
            actual = [int(dut.D_c[0].value), int(dut.D_c[1].value)]
            # print("Actua:", actual)
            expected = [int(sa_model.Matrix_C[i,0]),int(sa_model.Matrix_C[i,1])]
            if first_output_time is None:
                first_output_time = get_sim_time(unit="ns")
            
            # print("Expec: ", expected)
            # print("Actul: ", actual)
            # print(i)


            # print("Gold:", expected)
            if actual != expected:
                Test = False
                break
            i += 1
    if last_output_time is None:
                last_output_time = get_sim_time(unit="ns")

    latency_ns = first_output_time - first_input_time
    clock_period_ns = 10
    latency_cycles = latency_ns / clock_period_ns

    Total_latency_ns = last_output_time - first_input_time
    clock_period_ns = 10
    Total_latency_cycles = Total_latency_ns / clock_period_ns

    cocotb.log.info("All Values are %s !!!!!!!", Test)
    assert Test == True



    cocotb.log.info(f"First input at {first_input_time}ns, first output at {first_output_time}ns")
    cocotb.log.info(f"Latency = {latency_cycles:.0f} cycles")

    cocotb.log.info(f"First input at {first_input_time}ns, last output at {Total_latency_ns}ns")
    cocotb.log.info(f"Latency = {Total_latency_cycles:.0f} cycles")