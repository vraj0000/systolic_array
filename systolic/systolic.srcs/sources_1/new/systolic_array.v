`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 03/10/2026 07:17:04 PM
// Design Name: 
// Module Name: systolic_array
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


module systolic_array #(
    parameter systolic_size = 2,
    parameter bit_width = 8
) (
    input clk, rst,
    input  [bit_width-1:0]     in_a [0:systolic_size-1],
    input  [bit_width-1:0]     in_b [0:systolic_size-1],
    output [(bit_width*2)-1:0] out_c [0:systolic_size-1][0:systolic_size-1]
);

    wire [bit_width-1:0]     a_bus [0:systolic_size-1][0:systolic_size];
    wire [bit_width-1:0]     b_bus [0:systolic_size][0:systolic_size-1];
    wire [(bit_width*2)-1:0] c_bus [0:systolic_size-1][0:systolic_size-1];

    genvar i, j;
    generate
        // Left edge: feed row i of A into PE[i][0]
        for (i = 0; i < systolic_size; i = i+1) begin : LEFT_IN
            assign a_bus[i][0] = in_a[i];
        end
        // Top edge: feed col j of B into PE[0][j]
        for (j = 0; j < systolic_size; j = j+1) begin : TOP_IN
            assign b_bus[0][j] = in_b[j];
        end

        // PE array
        for (i = 0; i < systolic_size; i = i+1) begin : ROW
            for (j = 0; j < systolic_size; j = j+1) begin : COL


                pe #(.bit_width(bit_width)) U (
                    .clk  (clk),
                    .rst  (rst),
                    .in_a (a_bus[i][j]),      // A flows right along row i
                    .in_b (b_bus[i][j]),      // B flows down along col j
                    .out_a(a_bus[i][j+1]),    // pass A to next column
                    .out_b(b_bus[i+1][j]),    // pass B to next row
                    .out_c(c_bus[i][j])
                );
                assign out_c[i][j] = c_bus[i][j];
            end
        end
    endgenerate

endmodule
