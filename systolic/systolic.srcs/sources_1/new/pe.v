`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 03/09/2026 06:52:28 PM
// Design Name: 
// Module Name: pe
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


   module pe #(

    parameter bit_width = 8
    
) (

    input clk, rst,
    input [bit_width-1 : 0] in_a, 
    input [bit_width-1 : 0] in_b,

    output [bit_width-1 : 0] out_a, 
    output [bit_width-1 : 0] out_b, 
    output [(bit_width*2)-1 : 0] out_c
    
);

    reg [bit_width-1 : 0] r_out_a;
    reg [bit_width-1 : 0] r_out_b;
    (* use_dsp = "yes" *) reg [(bit_width*2)-1 : 0] r_out_c;

    assign out_a = r_out_a;
    assign out_b = r_out_b;
    assign out_c = r_out_c;

    wire [(bit_width*2)-1 : 0] multi;

    always @(posedge clk or posedge rst) begin

        if (rst) begin
            r_out_a <= 0;
            r_out_b <= 0;
            r_out_c <= 0;
        end
        else begin
            r_out_c <= out_c + multi;
            r_out_a <= in_a;
            r_out_b <= in_b;
        end
    end
    
    assign multi = in_a * in_b;
    
endmodule
