`timescale 1ns / 1ps

module tb;

    parameter systolic_size = 2;
    parameter bit_width     = 8;
    parameter mem_size      = 32;

    reg  [bit_width-1:0]     in_a_00, in_a_10, in_b_00, in_b_01;
    wire [(bit_width*2)-1:0] out_c [0:systolic_size-1];

    reg a_ready, b_ready;

    reg [$clog2(mem_size)-1:0]  num_matrix;

    wire systolic_busy, systolic_free;
    reg clk, rst;

    integer i;

    control_systolic #(
        .systolic_size (systolic_size),
        .bit_width (bit_width),
        .mem_size (mem_size)
    ) DUT (
        .clk (clk), .rst (rst),

        .a_ready (a_ready),
        .b_ready (b_ready),

        .D_a_00  (in_a_00),
        .D_a_10  (in_a_10),
        .D_b_00  (in_b_00),
        .D_b_01  (in_b_01),

        .num_matrix (num_matrix),
        .out_c_valid (),
        .D_c (out_c),
        .systolic_busy (systolic_busy),
        .systolic_free (systolic_free)
    );

    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    always @(posedge clk) begin
        $strobe("t=%0t | out_c=[%0d %0d] | c_ready = %d",
                  $time,
                  out_c[0], out_c[1], systolic_free);
    end

    initial begin
        $dumpfile("waveform.vcd");
        $dumpvars(0, tb);

        // reset
        rst = 1;
        in_a_00 <= 0;
        in_a_10 <= 0;
        in_b_00 <= 0;
        in_b_01 <= 0;

        repeat (3) @(posedge clk);
        rst = 0;

        num_matrix <= 10;

        a_ready <= 1;
        b_ready <= 1;

        in_a_00 <= 1; in_a_10 <= 3;
        in_b_00 <= 5; in_b_01 <= 6;
        @(posedge clk);

        in_a_00 <= 2; in_a_10 <= 4;
        in_b_00 <= 7; in_b_01 <= 8;
        @(posedge clk);

        in_a_00 <= 9;  in_a_10 <= 11;
        in_b_00 <= 13; in_b_01 <= 15;
        @(posedge clk);
        

        in_a_00 <= 10; in_a_10 <= 12;
        in_b_00 <= 14; in_b_01 <= 16;
        @(posedge clk);
  
        in_a_00 <= 17; in_a_10 <= 19;
        in_b_00 <= 21; in_b_01 <= 23;
        
        @(posedge clk);

        in_a_00 <= 18; in_a_10 <= 22;
        in_b_00 <= 20; in_b_01 <= 24;
        @(posedge clk);


        in_a_00 <= 1; in_a_10 <= 3;
        in_b_00 <= 5; in_b_01 <= 6;
        @(posedge clk);

        in_a_00 <= 2; in_a_10 <= 4;
        in_b_00 <= 7; in_b_01 <= 8;
        @(posedge clk);


        in_a_00 <= 1; in_a_10 <= 3;
        in_b_00 <= 5; in_b_01 <= 6;
        @(posedge clk);

        in_a_00 <= 2; in_a_10 <= 4;
        in_b_00 <= 7; in_b_01 <= 8;
        @(posedge clk);



        in_a_00 <= 1; in_a_10 <= 3;
        in_b_00 <= 5; in_b_01 <= 6;
        @(posedge clk);

        in_a_00 <= 2; in_a_10 <= 4;
        in_b_00 <= 7; in_b_01 <= 8;
        @(posedge clk);



        in_a_00 <= 1; in_a_10 <= 3;
        in_b_00 <= 5; in_b_01 <= 6;
        @(posedge clk);

        in_a_00 <= 2; in_a_10 <= 4;
        in_b_00 <= 7; in_b_01 <= 8;
        @(posedge clk);



        in_a_00 <= 1; in_a_10 <= 3;
        in_b_00 <= 5; in_b_01 <= 6;
        @(posedge clk);

        in_a_00 <= 2; in_a_10 <= 4;
        in_b_00 <= 7; in_b_01 <= 8;
        @(posedge clk);



        in_a_00 <= 1; in_a_10 <= 3;
        in_b_00 <= 5; in_b_01 <= 6;
        @(posedge clk);

        in_a_00 <= 2; in_a_10 <= 4;
        in_b_00 <= 7; in_b_01 <= 8;
        @(posedge clk);



        in_a_00 <= 1; in_a_10 <= 3;
        in_b_00 <= 5; in_b_01 <= 6;
        @(posedge clk);

        in_a_00 <= 2; in_a_10 <= 4;
        in_b_00 <= 7; in_b_01 <= 8;
        @(posedge clk);

        in_a_00 <= 0; in_a_10 <= 0;
        in_b_00 <= 0; in_b_01 <= 0;
        
        @(posedge clk);
        in_a_00 <= 0; in_a_10 <= 0;
        in_b_00 <= 0; in_b_01 <= 0;

        @(posedge clk);
        in_a_00 <= 0; in_a_10 <= 0;
        in_b_00 <= 0; in_b_01 <= 0;
        

        
        

        repeat (systolic_size + 2) @(posedge clk);

        $finish;
    end

endmodule