`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 03/12/2026 12:29:30 PM
// Design Name: 
// Module Name: top_systolic
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


module top_systolic #(
    parameter systolic_size = 2,
    parameter bit_width     = 8
)(
    input  clk, rst,
    input  data_ready,
    input  [bit_width-1:0] data_a [0:systolic_size-1][0:systolic_size-1],
    input  [bit_width-1:0] data_b [0:systolic_size-1][0:systolic_size-1],
    output [(bit_width*2)-1:0] data_c [0:systolic_size-1][0:systolic_size-1],
    output done
);

    wire valid, load, rst_out;
      
    (* mark_debug = "true" *) wire [bit_width-1:0] ila_data_a [0:systolic_size-1][0:systolic_size-1];
    (* mark_debug = "true" *) wire [bit_width-1:0] ila_data_b [0:systolic_size-1][0:systolic_size-1];
    (* mark_debug = "true" *) wire [(bit_width*2)-1:0] ila_data_c [0:systolic_size-1][0:systolic_size-1];
    
    assign ila_data_a = data_a;
    assign ila_data_b = data_b;
    assign ila_data_c = data_c; 
        
    // FSM - generates valid, load, done from data_ready
    control #(
        .systolic_size(systolic_size),
        .bit_width(bit_width)
    ) ctrl (
        .clk        (clk),
        .rst        (rst),
        .data_ready (data_ready),
        .valid      (valid),        // ← drive compute
        .load       (load),         // ← drive compute
        .done       (done),
        .rst_out    (rst_out)
    );

    // Datapath - receives valid/load from control
    compute #(
        .systolic_size(systolic_size),
        .bit_width(bit_width)
    ) cmp (
        .clk    (clk),
        .rst    (rst | rst_out),
        .valid  (valid),
        .load   (load),
        .data_a (data_a),
        .data_b (data_b),
        .data_c (data_c)
    );

endmodule
