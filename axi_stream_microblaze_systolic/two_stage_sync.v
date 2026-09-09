`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 03/14/2026 12:20:35 AM
// Design Name: 
// Module Name: two_stage_sync
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


module two_stage_sync (
    input clk, rst, d96,
    output q_100

);

    wire q_stage_1;

    (* ASYNC_REG = "TRUE" *) dff stage_1 (
        .clk(clk),
        .rst(rst),
        .d(d96),
        .q(q_stage_1)
        
    );

    (* ASYNC_REG = "TRUE" *) dff stage_2 (
        .clk(clk),
        .rst(rst),
        .d(q_stage_1),
        .q(q_100)
        
    );
    
endmodule
