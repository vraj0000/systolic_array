`timescale 1ns / 1ps

module tb #(
    parameter N = 2,
    parameter data_size = 8,
    parameter axi_stream_data_size = 32
)();

    reg                              s_axis_clk;
    reg                              s_axis_rst;
    reg                              s_axis_tvalid;
    reg  [axi_stream_data_size-1:0]  s_axis_tdata;
    wire                             s_axis_tready;

    wire                             m_axis_tvalid;
    wire [axi_stream_data_size-1:0]  m_axis_tdata;
    reg                              m_axis_tready;
    wire                             m_axis_tlast;

    initial begin
        s_axis_clk = 0;
        forever #5 s_axis_clk = ~s_axis_clk; // 100MHz clock
    end

    top #(
        .N                     (N),
        .data_size             (data_size),
        .axi_stream_data_size  (axi_stream_data_size)
    ) t1 (
        .s_axis_clk        (s_axis_clk),
        .s_axis_rst        (s_axis_rst),
        .s_axis_tvalid_in  (s_axis_tvalid),
        .s_axis_tdata_in   (s_axis_tdata),
        .s_axis_tready_in  (s_axis_tready),

        .s_axis_tvalid_out (m_axis_tvalid),
        .s_axis_tdata_out  (m_axis_tdata),
        .s_axis_tready_out (m_axis_tready),
        .s_axis_tlast_out  (m_axis_tlast)
    );

    task axis_write(input [axi_stream_data_size-1:0] data);
        begin
            s_axis_tvalid <= 1'b1;
            s_axis_tdata  <= data;

            @(posedge s_axis_clk);
            while (s_axis_tready == 1'b0) begin
                @(posedge s_axis_clk);
            end
        end
    endtask

    // watch the output side and print each beat as it's accepted
    always @(posedge s_axis_clk) begin
        if (m_axis_tvalid && m_axis_tready) begin
            $display("[%0t] OUTPUT BEAT: tdata=%h tlast=%b", $time, m_axis_tdata, m_axis_tlast);
        end
    end

    initial begin
        $dumpfile("waveform.vcd");
        $dumpvars(0, tb);

        s_axis_rst    = 1'b1;
        s_axis_tvalid = 1'b0;
        s_axis_tdata  = {axi_stream_data_size{1'b0}};
        m_axis_tready = 1'b1;   // always ready to accept output, for now

        #30;
        s_axis_rst = 1'b0;

        $display("Starting AXI-Stream writes...");
        axis_write(32'h01010101);
        axis_write(32'h02020202);
        axis_write(32'h03030303);
        axis_write(32'h04040404);
        axis_write(32'h05050505);
        axis_write(32'h06060606);
        axis_write(32'h04030201);
        axis_write(32'h08070605);

        #400;   // extra time to let the last transaction fully drain
        $finish;
    end

endmodule