`timescale 1ns / 1ps


/*
    This is O/P Statonary Systolic Array with double buffer 
    to sustain no stall if fead 2 rows of matrix every cycle. 
*/

module systolic #(
    parameter systolic_size = 2,
    parameter bit_width = 8
) (
    input clk, rst,
    input drain_even,
    input drain_odd,
    input switch,
    input  [bit_width-1:0]     in_a_00,
    input  [bit_width-1:0]     in_a_10,
    input  [bit_width-1:0]     in_b_00,
    input  [bit_width-1:0]     in_b_01,

    output out_c_valid,
    output [(bit_width*2)-1:0] out_c [0:systolic_size-1]  // bottom row, bank 0 chain
);

    // a flows LEFT->RIGHT within a row; b flows TOP->BOTTOM within a column
    wire [bit_width-1 : 0] out_a_00_01, out_a_10_11;   // row-wise (a)
    wire [bit_width-1 : 0] out_b_00_10, out_b_01_11;   // column-wise (b)
    wire [bit_width-1 : 0] out_a_01, out_a_11;         // unused right edge (a exits array here)
    wire [bit_width-1 : 0] out_b_10, out_b_11;         // unused bottom edge (b exits array here)


    // Connection for both the accumulator 0 and 1 to PEs below them.
    wire [(bit_width*2)-1:0] acc0_col0_00_to_10, acc1_col0_00_to_10;
    wire [(bit_width*2)-1:0] acc0_col1_01_to_11, acc1_col1_01_to_11;

    // Feeding in 0s to the top to reset the accumulator 
    wire [(bit_width*2)-1:0] boundary_zero_0, boundary_zero_1;
    assign boundary_zero_0 = 0;
    assign boundary_zero_1 = 0;

    // one-cycle boundary pre-skew for in_a_10 (row 1) and in_b_01 (col 1) --
    // one wide dff instance per bus, using dff's bit_width parameter
    wire [bit_width-1:0] in_a_10_d, in_b_01_d;
    
    // Stager logic is hardwaire here as this is small 2x2 systolic array
    // Easly be modified for generate.
    dff #(
        .bit_width (bit_width)
    ) stage_a (
        .clk (clk),
        .rst (rst),
        .d   (in_a_10),
        .q   (in_a_10_d)
    );

    dff #(
        .bit_width (bit_width)
    ) stage_b (
        .clk (clk),
        .rst (rst),
        .d   (in_b_01),
        .q   (in_b_01_d)
    );

    /* Swithc logic delay to PEs in a Diagnol patter

        PE_00 -> PE_10 & PE_01 -> PE_20 & PE_11 & PE_02 
        but for 2x2 we not need PE_20 and PE_02
    */
    // Drain and switch chain FFs
    reg switch_r1, switch_r2;
    dff #(
        .bit_width (1)
    ) switch_ff_1 (
        .clk (clk),
        .rst (rst),
        .d   (switch),
        .q   (switch_r1)
    );
    dff #(
        .bit_width (1)
    ) switch_ff2 (
        .clk (clk),
        .rst (rst),
        .d   (switch_r1),
        .q   (switch_r2)
    );

    /* Drain is similler to swtiching or fliping logic just a cycle delayed
        but this is governd by the FSM in this desing the drain_even or odd 
        buffer 

        sorry for the confusion I use o and 1 internal and even and odd in fsm

        The taks Systolic_size + 1 cycle so doubl buffer giving us 4 cycles
        is 1 cycle more. 
    */
    reg drain_even_r1, drain_odd_r1;

    dff #(
        .bit_width (1)
    ) drain_ff_1 (
        .clk (clk),
        .rst (rst),
        .d   (drain_even),
        .q   (drain_even_r1)
    );
    dff #(
        .bit_width (1)
    ) drain_ff_2 (
        .clk (clk),
        .rst (rst),
        .d   (drain_odd),
        .q   (drain_odd_r1)
    );

    // There are the row wise acc_0  and acc_1 we use
    // ---------------- row 0 ----------------
    wire [(bit_width*2)-1:0] out_acc_0 [0:systolic_size-1];
    wire [(bit_width*2)-1:0] out_acc_1 [0:systolic_size-1];

    pe #(
        .bit_width (bit_width)
    ) U_00 (
        .clk (clk),
        .rst (rst),
        .in_a (in_a_00),
        .in_b (in_b_00),

        .drain_data_0 (boundary_zero_0),   // top row -> boundary zero
        .drain_data_1 (boundary_zero_1),

        .drain_0 (drain_even),
        .drain_1 (drain_odd),
        .switch  (switch),

        .out_a (out_a_00_01),
        .out_b (out_b_00_10),
        .out_acc_0 (acc0_col0_00_to_10),    // forwards DOWN column 0, to U_10
        .out_acc_1 (acc1_col0_00_to_10)
    );

    pe #(
        .bit_width (bit_width)
    ) U_01 (
        .clk (clk),
        .rst (rst),
        .in_a (out_a_00_01),
        .in_b (in_b_01_d),

        .drain_data_0 (boundary_zero_0),   // top row -> boundary zero
        .drain_data_1 (boundary_zero_1),

        .drain_0 (drain_even_r1),
        .drain_1 (drain_odd_r1),
        .switch  (switch_r1),

        .out_a (out_a_01),
        .out_b (out_b_01_11),
        .out_acc_0 (acc0_col1_01_to_11),    // forwards DOWN column 1, to U_11
        .out_acc_1 (acc1_col1_01_to_11)
    );

    // ---------------- row 1 (bottom row -> external outputs) ----------------

    pe #(
        .bit_width (bit_width)
    ) U_10 (
        .clk (clk),
        .rst (rst),
        .in_a (in_a_10_d),
        .in_b (out_b_00_10),

        .drain_data_0 (acc0_col0_00_to_10),   // from U_00, same column
        .drain_data_1 (acc1_col0_00_to_10),

        .drain_0 (drain_even),
        .drain_1 (drain_odd),
        .switch  (switch_r1),

        .out_a (out_a_10_11),
        .out_b (out_b_10),
        .out_acc_0 (out_acc_0[0]),           // bottom row, column 0 -> external
        .out_acc_1 (out_acc_1[0])
    );

    pe #(
        .bit_width (bit_width)
    ) U_11 (
        .clk (clk),
        .rst (rst),
        .in_a (out_a_10_11),
        .in_b (out_b_01_11),

        .drain_data_0 (acc0_col1_01_to_11),   // from U_01, same column
        .drain_data_1 (acc1_col1_01_to_11),

        .drain_0 (drain_even_r1),
        .drain_1 (drain_odd_r1),
        .switch  (switch_r2),

        .out_a (out_a_11),
        .out_b (out_b_11),
        .out_acc_0 (out_acc_0[1]),           // bottom row, column 1 -> external
        .out_acc_1 (out_acc_1[1])
    );

    // The delay of the output as Collum_0 will drian 1st we have to make it wait.

    reg [(bit_width*2)-1:0] out_acc_0_r1, out_acc_1_r1;

    dff #(
        .bit_width ((bit_width*2))
    ) stage_c_0 (
        .clk (clk),
        .rst (rst),
        .d   (out_acc_0[0]),
        .q   (out_acc_0_r1)
    );

    dff #(
        .bit_width ((bit_width*2))
    ) stage_c_1 (
        .clk (clk),
        .rst (rst),
        .d   (out_acc_1[0]),
        .q   (out_acc_1_r1)
    );  

    reg [(bit_width*2)-1:0] out_c_r [0:systolic_size-1];
    wire drain_valid = drain_even_r1 | drain_odd_r1;

    reg out_c_valid_r;

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            out_c_valid_r <= 1'b0;
            out_c_r[0]  <= 0;
            out_c_r[1]  <= 0;
        end
        else begin
            out_c_valid_r <= drain_valid;

            if (drain_valid) begin
                out_c_r[0] <= switch_r2 ? out_acc_1_r1 : out_acc_0_r1;
                out_c_r[1] <= switch_r2 ? out_acc_1[1]  : out_acc_0[1];
            end
        end
    end
    
    assign out_c_valid = out_c_valid_r;
    assign out_c = out_c_r;



endmodule