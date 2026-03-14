module top (
    input clk,
    input rst
);
    localparam systolic_size = 4;
    localparam bit_width     = 8;
    localparam cycles        = 2*systolic_size - 1;  // 7 cycles

    // ── pre-staggered ROM ─────────────────────────────────────
    reg [bit_width-1:0] rom_a [0:cycles-1][0:systolic_size-1];
    reg [bit_width-1:0] rom_b [0:cycles-1][0:systolic_size-1];

    initial begin
        // fill these from Python output above
        // cycle 0
        rom_a[0][0]=8'd1;  rom_a[0][1]=8'd0;  rom_a[0][2]=8'd0;  rom_a[0][3]=8'd0;
        rom_b[0][0]=8'd1;  rom_b[0][1]=8'd0;  rom_b[0][2]=8'd0;  rom_b[0][3]=8'd0;
        // cycle 1
        rom_a[1][0]=8'd2;  rom_a[1][1]=8'd5;  rom_a[1][2]=8'd0;  rom_a[1][3]=8'd0;
        rom_b[1][0]=8'd5;  rom_b[1][1]=8'd2;  rom_b[1][2]=8'd0;  rom_b[1][3]=8'd0;
        // cycle 2
        rom_a[2][0]=8'd3;  rom_a[2][1]=8'd6;  rom_a[2][2]=8'd9;  rom_a[2][3]=8'd0;
        rom_b[2][0]=8'd9;  rom_b[2][1]=8'd6;  rom_b[2][2]=8'd3;  rom_b[2][3]=8'd0;
        // cycle 3
        rom_a[3][0]=8'd4;  rom_a[3][1]=8'd7;  rom_a[3][2]=8'd10; rom_a[3][3]=8'd13;
        rom_b[3][0]=8'd13; rom_b[3][1]=8'd10; rom_b[3][2]=8'd7;  rom_b[3][3]=8'd4;
        // cycle 4
        rom_a[4][0]=8'd0;  rom_a[4][1]=8'd8;  rom_a[4][2]=8'd11; rom_a[4][3]=8'd14;
        rom_b[4][0]=8'd0;  rom_b[4][1]=8'd14; rom_b[4][2]=8'd11; rom_b[4][3]=8'd8;
        // cycle 5
        rom_a[5][0]=8'd0;  rom_a[5][1]=8'd0;  rom_a[5][2]=8'd12; rom_a[5][3]=8'd15;
        rom_b[5][0]=8'd0;  rom_b[5][1]=8'd0;  rom_b[5][2]=8'd15; rom_b[5][3]=8'd12;
        // cycle 6
        rom_a[6][0]=8'd0;  rom_a[6][1]=8'd0;  rom_a[6][2]=8'd0;  rom_a[6][3]=8'd16;
        rom_b[6][0]=8'd0;  rom_b[6][1]=8'd0;  rom_b[6][2]=8'd0;  rom_b[6][3]=8'd16;
    end

    // ── counter ───────────────────────────────────────────────
    reg [$clog2(cycles):0] cnt;
    reg running;

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            cnt     <= 0;
            running <= 1;
        end else begin
            if (running) begin
                if (cnt == cycles - 1) begin
                    cnt     <= cnt;
                    running <= 0;
                end else
                    cnt <= cnt + 1;
            end
        end
    end

    // ── registered ROM outputs ────────────────────────────────
    reg [bit_width-1:0] in_a [0:systolic_size-1];
    reg [bit_width-1:0] in_b [0:systolic_size-1];

    always @(posedge clk) begin
        in_a[0] <= running ? rom_a[cnt][0] : 0;
        in_a[1] <= running ? rom_a[cnt][1] : 0;
        in_a[2] <= running ? rom_a[cnt][2] : 0;
        in_a[3] <= running ? rom_a[cnt][3] : 0;
        in_b[0] <= running ? rom_b[cnt][0] : 0;
        in_b[1] <= running ? rom_b[cnt][1] : 0;
        in_b[2] <= running ? rom_b[cnt][2] : 0;
        in_b[3] <= running ? rom_b[cnt][3] : 0;
    end

    // ── systolic array ────────────────────────────────────────
    wire [(bit_width*2)-1:0] out_c [0:systolic_size-1][0:systolic_size-1];

    systolic_array #(
        .systolic_size(systolic_size),
        .bit_width(bit_width)
    ) sa (
        .clk  (clk),
        .rst  (rst),
        .in_a (in_a),
        .in_b (in_b),
        .out_c(out_c)
    );

    // ── ILA probes - just corner elements for 4x4 ────────────
    (* mark_debug = "true" *) wire [15:0] ila_c00 = out_c[0][0];
    (* mark_debug = "true" *) wire [15:0] ila_c03 = out_c[0][3];
    (* mark_debug = "true" *) wire [15:0] ila_c30 = out_c[3][0];
    (* mark_debug = "true" *) wire [15:0] ila_c33 = out_c[3][3];
    (* mark_debug = "true" *) wire [7:0]  ila_a0  = in_a[0];
    (* mark_debug = "true" *) wire [7:0]  ila_b0  = in_b[0];

endmodule