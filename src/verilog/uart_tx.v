`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 03/04/2026 10:29:22 AM
// Design Name: 
// Module Name: uart_tx
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

module uart_tx (
    input        clk,
    input  [7:0] data_tx,
    input        send,
    output reg   RsTx    = 1,
    output reg   tx_busy = 0
);
    parameter IDLE  = 2'b00,
              START = 2'b01,
              DATA  = 2'b10,
              STOP  = 2'b11;

    reg [1:0] state      = IDLE;
    reg [1:0] next_state = IDLE;

    parameter BAUD_DIV = 8;
    // FIX [3]: reset baud_cnt when send is latched so START bit is
    //          always exactly BAUD_DIV clocks wide
    reg [3:0] baud_cnt = 0;
    reg [3:0] bit_cnt  = 0;
    reg [7:0] shift    = 8'hFF;

    wire tick = (baud_cnt == BAUD_DIV - 1);

    // Baud counter - resets on tick, or when we latch a new send in IDLE/STOP
    always @(posedge clk) begin
        if (state == IDLE && send)  // reset condition lives HERE
            baud_cnt <= 0;
        else if (tick)
            baud_cnt <= 0;
        else
            baud_cnt <= baud_cnt + 1;
    end

    // Next-state logic
    always @(*) begin
        next_state = state;
        case (state)
            IDLE:  if (send)                  next_state = START;
            START: if (tick)                  next_state = DATA;
            DATA:   if (tick && bit_cnt == 7)   next_state = STOP;
            STOP:  if (tick) begin
                       if (send)              next_state = START;
                       else                   next_state = IDLE;
                   end
            default:                          next_state = IDLE;
        endcase
    end

    // State register
    always @(posedge clk)
        state <= next_state;

    // Datapath
    always @(posedge clk) begin
        case (state)
            IDLE: begin
                RsTx    <= 1;
                tx_busy <= 0;
                if (send) begin
                    tx_busy <= 1;
                    shift   <= data_tx;
                end
            end

            START: begin
                tx_busy <= 1;
                RsTx    <= 0;
                bit_cnt <= 0;
            end

            DATA: begin
                RsTx <= shift[0];
                if (tick) begin
                    shift   <= {1'b1, shift[7:1]};
                    bit_cnt <= bit_cnt + 1;
                end
            end

            STOP: begin
                RsTx <= 1;
                if (tick) begin
                    tx_busy <= 0;      // clear only at end of STOP bit
                    if (send) begin
                        tx_busy <= 1;  // immediately re-assert if next byte waiting
                        shift   <= data_tx;
                    end
                end
            end
        endcase
    end

endmodule
