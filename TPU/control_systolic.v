module control_systolic #(
    parameter systolic_size = 2,
    parameter bit_width      = 8,
    parameter mem_size = 100
)(
    input  clk, rst,

    input  a_ready,
    input  b_ready,

    input  [bit_width-1:0]          D_a_00,
    input  [bit_width-1:0]          D_a_10,
    input  [bit_width-1:0]          D_b_00,
    input  [bit_width-1:0]          D_b_01,

    input [$clog2(mem_size)-1:0]  num_matrix,

    output [(bit_width*2)-1:0]      D_c [0:systolic_size-1],
    output                          out_c_valid,     
    output                          systolic_busy,
    output                          systolic_free
);


    reg [$clog2(mem_size)-1:0] row_count, matrix_count;

    reg busy_r;
    always @(posedge clk) begin
        if (rst)
            busy_r <= 1'b0;
        else if (!busy_r && start)
            busy_r <= 1'b1;
        else if (busy_r && (matrix_count == num_matrix))
            busy_r <= 1'b0;
    end

    assign systolic_busy = busy_r;
    assign systolic_free = !busy_r;

    wire start;
    assign start = a_ready & b_ready;

    always @(posedge clk) begin
        if (rst) begin
            row_count    <= 0;
            matrix_count <= 0;
        end else if (out_c_valid) begin
            if (row_count == systolic_size - 1) begin
                row_count    <= 0;
                matrix_count <= matrix_count + 1;
            end else begin
                row_count <= row_count + 1;
            end
        end else begin
            row_count    <= 0;
            matrix_count <= 0;
        end
    end

    reg [1:0] cnt;
    reg switch, switch_r1, switch_r2;
    reg drain_odd, drain_odd_d1, drain_even;

    always @(posedge clk) begin
        if (rst || !(start)) begin
            switch_r1 <= 0;
            switch          <= 1'b0;
            drain_odd       <= 1'b0;
            drain_odd_d1    <= 1'b0;
            drain_even      <= 1'b0;
        end else begin
            switch_r1       <= switch;
            switch          <= !switch_r1;
            drain_odd       <= switch_r1;
            drain_odd_d1    <= drain_odd;
            drain_even      <= drain_odd_d1;
        end
    end

    systolic #(
        .systolic_size (systolic_size),
        .bit_width     (bit_width)
    ) systolic_unit_0 (
        .clk        (clk),
        .rst        (rst),
        .drain_even (drain_even),
        .drain_odd  (drain_odd),
        .switch     (switch_r1),
        .in_a_00    (D_a_00),
        .in_a_10    (D_a_10),
        .in_b_00    (D_b_00),
        .in_b_01    (D_b_01),
        .out_c_valid (out_c_valid),
        .out_c      (D_c)
    );

endmodule