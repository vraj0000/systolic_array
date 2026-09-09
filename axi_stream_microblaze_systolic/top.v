`timescale 1ns / 1ps
module top #(
    parameter N = 2,
    parameter data_size = 8,
    parameter axi_stream_data_size = 32
)(
    input   wire                            s_axis_clk,
    input   wire                            s_axis_rst,
    input   wire                            s_axis_tvalid_in,
    input   wire [axi_stream_data_size-1:0] s_axis_tdata_in,
    output  wire                            s_axis_tready_in,

    output  wire                            s_axis_tvalid_out,
    output  reg  [axi_stream_data_size-1:0] s_axis_tdata_out,
    input   wire                            s_axis_tready_out,
    output  wire                            s_axis_tlast_out
);

    // ---------------- input-side sizing ----------------
    localparam ELEMS_PER_BEAT = axi_stream_data_size / data_size;   // 4
    localparam TOTAL_ELEMS    = 2*N*N;                              // 8
    localparam NUM_BEATS      = TOTAL_ELEMS / ELEMS_PER_BEAT;       // 2

    // ---------------- output-side sizing ----------------
    localparam C_ELEM_WIDTH     = data_size*2;                          // 16
    localparam C_ELEMS_PER_BEAT = axi_stream_data_size / C_ELEM_WIDTH;  // 2
    localparam C_TOTAL_ELEMS    = N*N;                                  // 4
    localparam C_NUM_BEATS      = C_TOTAL_ELEMS / C_ELEMS_PER_BEAT;     // 2

    localparam SA_IDLE = 2'd0, LOAD_STREAM = 2'd1, COMPUTE = 2'd2, SEND = 2'd3;
    reg [1:0] state;
    reg [1:0] next_state;

    reg [data_size - 1 : 0] counter;
    wire start_count;
    wire count_done;
    wire done;

    // ---------------- FSM ----------------
    always @(posedge s_axis_clk) begin
        if (s_axis_rst)
            state <= SA_IDLE;
        else
            state <= next_state;
    end

    always @(*) begin
        next_state = state;
        case (state)
            SA_IDLE:     if (s_axis_tvalid_in) next_state = LOAD_STREAM;
            LOAD_STREAM: if (count_done)       next_state = COMPUTE;
            COMPUTE:     if (done)             next_state = SEND;
            SEND:        if (send_done)        next_state = SA_IDLE;
            default:                           next_state = SA_IDLE;
        endcase
    end

    // ---------------- input-side load logic ----------------
    assign s_axis_tready_in = (state == LOAD_STREAM);
    assign start_count      = (state == LOAD_STREAM);

    always @(posedge s_axis_clk) begin
        if (s_axis_rst | !start_count)
            counter <= 0;
        else
            counter <= counter + 1;
    end

    assign count_done = (counter == (NUM_BEATS - 1));

    reg [axi_stream_data_size - 1 : 0] sipo [0:NUM_BEATS-1];

    integer i;
    always @(posedge s_axis_clk) begin
        if (s_axis_rst) begin
            for (i = 0; i < NUM_BEATS; i = i+1)
                sipo[i] <= 0;
        end else begin
            if (state == LOAD_STREAM && s_axis_tvalid_in)
                sipo[counter[0]] <= s_axis_tdata_in;
        end
    end

    // ---------------- unpack sipo -> matrices ----------------
    reg [data_size-1:0] mat_a [0:N-1][0:N-1];
    reg [data_size-1:0] mat_b [0:N-1][0:N-1];

    integer r, c, idx;
    always @(*) begin
        for (r = 0; r < N; r = r + 1) begin
            for (c = 0; c < N; c = c + 1) begin
                idx = r*N + c;
                mat_a[r][c] = sipo[idx/ELEMS_PER_BEAT][(idx%ELEMS_PER_BEAT)*data_size +: data_size];
                idx = N*N + c*N + r;   // transpose fix
                mat_b[r][c] = sipo[idx/ELEMS_PER_BEAT][(idx%ELEMS_PER_BEAT)*data_size +: data_size];
            end
        end
    end

    // ---------------- systolic array ----------------
    wire [(data_size*2)-1:0] data_c [0:N-1][0:N-1];

    top_systolic #(.systolic_size(N), .bit_width(data_size)) u_systolic (
        .clk        (s_axis_clk),
        .rst        (s_axis_rst),
        .data_ready (state == COMPUTE),
        .data_a     (mat_a),
        .data_b     (mat_b),
        .data_c     (data_c),
        .done       (done)
    );

    // ---------------- latch result on done, before rst_out wipes it ----------------
    reg [C_ELEM_WIDTH-1:0] c_regs [0:C_TOTAL_ELEMS-1];
    integer rr, cc;
    always @(posedge s_axis_clk) begin
        if (s_axis_rst) begin
            for (i = 0; i < C_TOTAL_ELEMS; i = i+1)
                c_regs[i] <= 0;
        end else if (done) begin
            for (rr = 0; rr < N; rr = rr+1)
                for (cc = 0; cc < N; cc = cc+1)
                    c_regs[rr*N+cc] <= data_c[rr][cc];
        end
    end

    // ---------------- drain c_regs out over s_axis_*_out ----------------
    reg [data_size-1:0] out_counter;
    wire out_beat_accept = s_axis_tvalid_out & s_axis_tready_out;
    wire send_done;

    always @(posedge s_axis_clk) begin
        if (s_axis_rst)
            out_counter <= 0;
        else if (state != SEND)
            out_counter <= 0;
        else if (out_beat_accept)
            out_counter <= out_counter + 1;
    end

    assign send_done = out_beat_accept && (out_counter == C_NUM_BEATS-1);

    assign s_axis_tvalid_out = (state == SEND);
    assign s_axis_tlast_out  = (state == SEND) && (out_counter == C_NUM_BEATS-1);

    integer p;
    always @(*) begin
        s_axis_tdata_out = {axi_stream_data_size{1'b0}};
        for (p = 0; p < C_ELEMS_PER_BEAT; p = p+1)
            s_axis_tdata_out[p*C_ELEM_WIDTH +: C_ELEM_WIDTH] = c_regs[out_counter*C_ELEMS_PER_BEAT + p];
    end

endmodule