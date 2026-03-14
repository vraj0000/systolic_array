`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 03/14/2026 12:19:57 AM
// Design Name: 
// Module Name: unpacker
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


module unpacker #(
    parameter systolic_size = 2,
    parameter bit_width = 8
) (
    input clk, rst,
    input wen,                             

    input [bit_width - 1 : 0] ux_in,

    output reg [bit_width - 1 : 0] mat_a_b [0 : (systolic_size * systolic_size * 2) - 1]
);

    localparam N = (systolic_size * systolic_size * 2) - 1;
  
    integer i;
    
    localparam NUM_BANKS = (N+1) / 64;

    (* max_fanout = 64 *) reg wen_local;
    always @(posedge clk or posedge rst) begin
        if (rst) wen_local <= 0;
        else     wen_local <= wen;
    end

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            for (i = 0; i <= N; i = i + 1)
                mat_a_b[i] <= 0;
        end
        else if (wen_local) begin                 
            mat_a_b[0] <= ux_in;

            for (i = N; i > 0; i = i - 1)
                mat_a_b[i] <= mat_a_b[i-1];
        end
    end

endmodule

