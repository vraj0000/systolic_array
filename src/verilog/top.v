`timescale 1ns / 1ps
module top (
    input  clk,
    input  RsRx,
    output RsTx
);
    // ── Internal Signals ──────────────────────────────────────────
    wire [7:0] rx_data;
    wire       rx_valid;
    wire       clk_96;
    wire       locked;

    // ── Reset synchroniser (96 MHz domain only) ───────────────────
    reg [1:0] rst_sync_96 = 2'b00;
    wire      rst_n = rst_sync_96[1];

    always @(posedge clk_96 or negedge locked) begin
        if (!locked) rst_sync_96 <= 2'b00;
        else         rst_sync_96 <= {rst_sync_96[0], 1'b1};
    end

    // ── PLL ───────────────────────────────────────────────────────
    clk_wiz_0 pll_inst (
        .clk_in1 (clk),
        .clk_out1(clk_96),
        .locked  (locked)
    );
    wire clk_120;
    wire lock2;
    clk_wiz_1 pll_inst2 (
        .clk_in1 (clk),
        .clk_out1(clk_120),
        .locked  (lock2)
    );
    
    wire ack100;
    wire [8 - 1 : 0] mat_a [0 : 2 - 1] [0 : 2 - 1];
    wire [8 - 1 : 0] mat_b [0 : 2 - 1] [0 : 2 - 1];
    
    top_unpacker unpack (
    
        .clk(clk),
        .clk_96(clk_96),
        .rst(~rst_n),
        .RsRx(RsRx),
        
        .ack100(ack100),
        .mat_a_100(mat_a),
        .mat_b_100(mat_b)
    );
    // ── Systolic Array (96 MHz) ───────────────────────────────────
    wire [(8*2)-1:0] data_c [0:1][0:1];

    top_systolic u_systolic (
        .clk        (clk_120),
        .rst        (~rst_n),
        .data_ready (ack100),
        .data_a     (mat_a),
        .data_b     (mat_b),
        .data_c     (data_c),
        .done       (done)
    );

    // ── Result Serialiser (96 MHz) ────────────────────────────────
    // done   → latch result_c
    // done_d → start TX one cycle later so result_c is settled

    reg [(8*2)-1:0] result_c [0:1][0:1];
    (* mark_debug = "true" *) reg [7:0]  tx_data     = 8'h00;
    reg        tx_valid    = 1'b0;
    wire       tx_busy;
    reg [2:0]  tx_byte_cnt = 3'd0;
    reg        tx_active   = 1'b0;
   (* mark_debug = "true" *)  reg        done_d      = 1'b0;
    reg        tx_sent     = 1'b0;

    always @(posedge clk_96) begin
        if (!rst_n) begin
            done_d      <= 1'b0;
            tx_valid    <= 1'b0;
            tx_active   <= 1'b0;
            tx_byte_cnt <= 3'd0;
            tx_sent     <= 1'b0;
        end else begin
            tx_valid <= 1'b0;
            tx_sent  <= 1'b0;
            done_d   <= done;

            // Latch results when done fires
            if (done) begin
                result_c[0][0] <= data_c[0][0];
                result_c[0][1] <= data_c[0][1];
                result_c[1][0] <= data_c[1][0];
                result_c[1][1] <= data_c[1][1];
            end

            // One cycle later start TX
            if (done_d && !tx_active) begin
                tx_active   <= 1'b1;
                tx_byte_cnt <= 3'd0;
            end

            // Send one byte per UART TX idle window
            if (tx_active && !tx_busy && !tx_valid && !tx_sent) begin
                case (tx_byte_cnt)
                    3'd0: tx_data <= result_c[0][0][7:0];
                    3'd1: tx_data <= result_c[0][0][15:8];
                    3'd2: tx_data <= result_c[0][1][7:0];
                    3'd3: tx_data <= result_c[0][1][15:8];
                    3'd4: tx_data <= result_c[1][0][7:0];
                    3'd5: tx_data <= result_c[1][0][15:8];
                    3'd6: tx_data <= result_c[1][1][7:0];
                    3'd7: tx_data <= result_c[1][1][15:8];
                endcase
                tx_valid <= 1'b1;
                tx_sent  <= 1'b1;

                if (tx_byte_cnt == 3'd7)
                    tx_active <= 1'b0;
                else
                    tx_byte_cnt <= tx_byte_cnt + 3'd1;
            end
        end
    end

    // ── UART TX ───────────────────────────────────────────────────
    uart_tx u_tx (
        .clk    (clk_96),
        .data_tx(tx_data),
        .send   (tx_valid),
        .tx_busy(tx_busy),
        .RsTx   (RsTx)
    );

endmodule