`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 03/12/2026 12:17:46 PM
// Design Name: 
// Module Name: feeder
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


module feeder #(
    parameter systolic_size = 2,
    parameter bit_width     = 8
) (
    input  clk, rst, valid, load,
    input  [bit_width-1:0] data_i [0:systolic_size-1],  // unpacked array
    output [bit_width-1:0] data_o
);

    reg [bit_width-1:0] shift_data [0:systolic_size-1];
    integer i; 

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            for (i = 0; i < systolic_size; i = i+1)
                shift_data[i] <= {bit_width{1'b0}};

        end else if (load) begin
            for (i = 0; i < systolic_size; i = i+1)
                shift_data[i] <= data_i[i];  // direct array indexing

        end else if (valid) begin
            for (i = 0; i < systolic_size-1; i = i+1)
                shift_data[i] <= shift_data[i+1];
            shift_data[systolic_size-1] <= {bit_width{1'b0}};
        end
    end

    assign data_o = valid ? shift_data[0] : {bit_width{1'b0}};

endmodule
