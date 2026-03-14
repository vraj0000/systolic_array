`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 03/14/2026 12:16:34 AM
// Design Name: 
// Module Name: top_unpacker
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


module top_unpacker #(
    parameter systolic_size = 2,
    parameter bit_width     = 8
) (
    input clk, clk_96, rst,                              
    input RsRx,

    output ack100,
    output [bit_width - 1 : 0] mat_a_100 [0 : systolic_size - 1] [0 : systolic_size - 1],
    output [bit_width - 1 : 0] mat_b_100 [0 : systolic_size - 1] [0 : systolic_size - 1]                   
);

    localparam N = (systolic_size * systolic_size * 2) - 1;

    // mat_a/mat_b in 96MHz domain
    (* mark_debug = "true" *) wire [bit_width - 1 : 0] mat_a [0 : systolic_size - 1] [0 : systolic_size - 1];
    (* mark_debug = "true" *) wire [bit_width - 1 : 0] mat_b [0 : systolic_size - 1] [0 : systolic_size - 1];


    (* mark_debug = "true" *) wire ack100_synced;
    (* mark_debug = "true" *) wire data_ready_96;
    (* mark_debug = "true" *) wire data_ready_synced;
    (* mark_debug = "true" *) wire rx_ready;
    (* mark_debug = "true" *) wire [bit_width-1:0] ux_in;


    uart_rx u_uart (
        .clk     (clk_96),
        .RsRx    (RsRx),
        .data_rx (ux_in),
        .rx_ready(rx_ready)
    );

    // -------------------------
    // 96MHz domain
    // -------------------------
    control_unpack_96 #(
        .systolic_size(systolic_size),
        .bit_width(bit_width)
    ) u_ctrl_96 (
        .clk          (clk_96),
        .rst          (rst),
        .rx_ready     (rx_ready),
        .rx_data_in   (ux_in),
        .ack100       (ack100_synced),
        .mat_a        (mat_a),
        .mat_b        (mat_b),
        .data_ready_96(data_ready_96)
    );

    // -------------------------
    // CDC: 96 -> 100
    // -------------------------
    two_stage_sync u_sync_96_to_100 (
        .clk  (clk),
        .rst  (rst),
        .d96  (data_ready_96),
        .q_100(data_ready_synced)
    );

    // -------------------------
    // 100MHz domain
    // -------------------------
    control_unpack_100 #(
        .systolic_size(systolic_size),
        .bit_width(bit_width)
    ) u_ctrl_100 (
        .clk              (clk),
        .rst              (rst),
        .data_ready_synced(data_ready_synced),
        .ack100           (ack100),
        .mat_a_96         (mat_a),
        .mat_b_96         (mat_b),
        .mat_a_100        (mat_a_100),
        .mat_b_100        (mat_b_100)
    );

    // -------------------------
    // CDC: 100 -> 96
    // -------------------------
    two_stage_sync u_sync_100_to_96 (
        .clk  (clk_96),
        .rst  (rst),
        .d96  (ack100),
        .q_100(ack100_synced)
    );

endmodule

