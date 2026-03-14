`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 03/07/2026 08:21:01 PM
// Design Name: 
// Module Name: uart_rx
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


`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 03/07/2026 08:17:10 PM
// Design Name: 
// Module Name: uart_Rx
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


module uart_rx (
    input            clk,
    input            RsRx,
    output reg [7:0] data_rx  = 0,
    output reg       rx_ready = 0
);

    (* mark_debug = "true" *) wire debug_rx;
    assign debug_rx = rx_ready;
    parameter IDLE  = 2'b00,
              START = 2'b01,
              DATA  = 2'b10,
              STOP  = 2'b11;
    (* mark_debug = "true" *) reg [1:0] state      = IDLE;
    reg [1:0] next_state = IDLE;
    parameter BAUD_DIV     = 8;
    parameter BAUD_DIV_HALF = BAUD_DIV / 2;
    // Sample in the middle of each bit by starting at half-period on START,
    // then ticking every full BAUD_DIV thereafter
    reg [3:0] baud_cnt = 0;
    reg [3:0] bit_cnt  = 0;
    reg [7:0] shift    = 8'hFF;
    wire tick = (baud_cnt == BAUD_DIV - 1);
    // Baud counter - half-period offset on START entry to centre samples,
    //                full-period thereafter
    always @(posedge clk) begin
        if (state == IDLE && !RsRx)         // falling edge -> reset to half-period
            baud_cnt <= BAUD_DIV_HALF - 1;
        else if (tick)
            baud_cnt <= 0;
        else
            baud_cnt <= baud_cnt + 1;
    end
    // Next-state logic
    always @(*) begin
        next_state = state;
        case (state)
            IDLE:  if (!RsRx)                  next_state = START;
            START: if (tick)                   next_state = DATA;
            DATA:  if (tick && bit_cnt == 7)   next_state = STOP;
            STOP:  if (tick) begin
                       if (!RsRx)              next_state = START;
                       else                    next_state = IDLE;
                   end
            default:                           next_state = IDLE;
        endcase
    end
    // State register
    always @(posedge clk)
        state <= next_state;
    // Datapath
    always @(posedge clk) begin
        case (state)
            IDLE: begin
                rx_ready <= 0;
                bit_cnt  <= 0;
            end
            START: begin
                rx_ready <= 0;
                bit_cnt  <= 0;
            end
            DATA: begin
                if (tick) begin
                    shift   <= {RsRx, shift[7:1]};  // LSB-first shift-in
                    bit_cnt <= bit_cnt + 1;
                end
            end
            STOP: begin
                if (tick) begin
                    data_rx  <= shift;
                    rx_ready <= 1;
                end
            end
        endcase
    end
endmodule

