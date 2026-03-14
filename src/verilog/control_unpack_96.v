`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 03/14/2026 12:18:37 AM
// Design Name: 
// Module Name: control_unpack_96
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module control_unpack_96 #(
    parameter systolic_size = 2,
    parameter bit_width = 8
) (
    input clk, rst,
    input rx_ready,
    input ack100,
    input [bit_width - 1 : 0] rx_data_in,

    output reg [bit_width - 1 : 0] mat_a [0 : systolic_size - 1] [0 : systolic_size - 1],
    output reg [bit_width - 1 : 0] mat_b [0 : systolic_size - 1] [0 : systolic_size - 1],
    output reg data_ready_96
);

    localparam N = (systolic_size * systolic_size * 2) - 1;

    wire [bit_width - 1 : 0] mat_ab [0 : N];

    (* mark_debug = "true" *)  reg [$clog2(N)+1:0] counter_limit;

    // -------------------------
    // unpacker instance
    // -------------------------
    unpacker #(
        .systolic_size(systolic_size),
        .bit_width(bit_width)
    ) u_unpack (
        .clk   (clk),
        .rst   (rst),
        .wen   (rx_ready),
        .ux_in (rx_data_in),
        .mat_a_b(mat_ab)
    );

    // -------------------------
    // static wire mapping - no logic, no fanout
    // -------------------------
    integer i, j;
    always @(*) begin
        for (i = 0; i < systolic_size; i = i + 1)
            for (j = 0; j < systolic_size; j = j + 1) begin
                mat_a[i][j] = mat_ab[N - (i * systolic_size + j)];
                mat_b[i][j] = mat_ab[N - (i * systolic_size + j + (systolic_size * systolic_size))];
            end
    end

    // -------------------------
    // counter
    // -------------------------
    always @(posedge clk or posedge rst) begin
        if (rst || ack100)                          counter_limit <= 0;
        else if (rx_ready && counter_limit <= N+1)    counter_limit <= counter_limit + 1;
    end

    // -------------------------
    // data_ready_96
    // -------------------------
    always @(*) begin
        data_ready_96 = (counter_limit == N+1);
    end

endmodule

