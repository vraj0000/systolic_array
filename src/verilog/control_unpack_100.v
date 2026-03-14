`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 03/14/2026 12:19:21 AM
// Design Name: 
// Module Name: control_unpack_100
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


module control_unpack_100 #(
    parameter systolic_size = 2,
    parameter bit_width = 8
) (
    input clk, rst,
    input data_ready_synced,
    output reg ack100,

    input [bit_width - 1 : 0] mat_a_96 [0 : systolic_size - 1] [0 : systolic_size - 1],
    input [bit_width - 1 : 0] mat_b_96 [0 : systolic_size - 1] [0 : systolic_size - 1],

    output reg [bit_width - 1 : 0] mat_a_100 [0 : systolic_size - 1] [0 : systolic_size - 1],
    output reg [bit_width - 1 : 0] mat_b_100 [0 : systolic_size - 1] [0 : systolic_size - 1]
);

    integer i, j;

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            ack100 <= 0;
            for (i = 0; i < systolic_size; i = i + 1)
                for (j = 0; j < systolic_size; j = j + 1) begin
                    mat_a_100[i][j] <= 0;
                    mat_b_100[i][j] <= 0;
                end
        end
        else if (data_ready_synced) begin
            ack100 <= 1;
            for (i = 0; i < systolic_size; i = i + 1)
                for (j = 0; j < systolic_size; j = j + 1) begin
                    mat_a_100[i][j] <= mat_a_96[i][j];
                    mat_b_100[i][j] <= mat_b_96[i][j];
                end
        end
        else begin
            ack100 <= 0;
        end
    end

endmodule
