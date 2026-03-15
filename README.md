# Systolic Array Accelerator on Basys 3

A 16x16 systolic array that does matrix multiplication on a Basys 3 FPGA. You send matrices from a PC over UART, it multiplies them, and sends the result back. The compute core runs at 120 MHz and the UART side runs at 96 MHz with a handshake to cross the clock boundary safely.

Throughput is 1.2 MBPS using the ftd2xx library at 12 MBaud with 8x oversampling, clocked by a PLL at 96 MHz.

---

## How It Works

The design splits into two clock domains:
- **96 MHz domain** handles UART RX/TX and unpacking the incoming byte stream
- **120 MHz domain** runs the systolic array and accumulates results

Data crosses the boundary via a 2-stage synchronizer handshake. When `data_ready_96` goes high it propagates through the synchronizer, gets captured in the 120 MHz domain, triggers an `ack100` back to the 96 MHz side, and resets the counter for the next byte.

![CDC Handshake](images/120-96_cdc.bmp)

The array itself is controlled by an FSM with four states: `IDLE -> LOAD -> COMPUTE -> DONE`.

![FSM Diagram](images/systolic_fsm.bmp)

---

- ## Module Hierarchy

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
| Array size | Max implemeted 16x16 |
| Compute clock | 120 MHz |
| UART clock | 96 MHz |
| UART baud rate | 12 MBaud |
| Throughput | 1.2 MBPS |
| WNS (after optimization) | +0.149 ns |
| Target device | Basys 3 (Artix-7) |

Timing started at WNS = -0.261 ns and closed at +0.149 ns. The main fix was setting `max_fanout = 64` on `rx_ready`, which was fanning out to 4097 endpoints and blowing the timing budget on those paths. Adding that line made a tree structure for Write enable singal.
---

## Verification

The design was verified on hardware using Vivado ILA. Captures confirm:

![ILA Capture](images/pc_side.bmp)

- Byte stream unpacking and state transitions (`IDLE -> LOAD -> COMPUTE -> DONE`) work correctly at full speed
- The CDC handshake holds: `data_ready_96` asserts, crosses the synchronizer, `ack100` fires back, counter resets cleanly
- Output values match expected results for both 2x2 and 16x16 test cases

---

## What I Learned

Timing closure on real hardware: started at WNS = -0.261 ns and closed at +0.149 ns for 16x16 Systolic array.

Signal replication to reduce fanout: `rx_ready` was fanning out to 4097 endpoints and blowing the timing budget. Fixed by setting `max_fanout = 64` which let Vivado replicate the register and distribute the load across shorter paths.

Critical path analysis: used `report_timing` to trace the failing path, identified the PE MAC as the bottleneck, and inserted input and output pipeline stages to break the long combinational path.

Pipeline stage placement: where you cut the path matters. Splitting at the multiplier boundary gave better slack than splitting at the adder output.

Making the compute the dominant clock: pushing the systolic array to 120 MHz while keeping UART at 96 MHz keeps the bottleneck in the compute domain where it belongs.

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
- The 2x2 version was used for early bringup and is still in the repo, it is simpler to debug on the ILA but the desing is fully scaleable.
