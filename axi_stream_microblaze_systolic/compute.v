module compute #(
    parameter systolic_size = 2,
    parameter bit_width = 8
)(
    input clk, rst, valid, load,
    input [bit_width-1:0] data_a [0:systolic_size-1][0:systolic_size-1], 
    input [bit_width-1:0] data_b [0:systolic_size-1][0:systolic_size-1],
    output [(bit_width*2)-1:0] data_c   [0:systolic_size-1][0:systolic_size-1]
);

    wire [bit_width-1:0] top_feed  [0:systolic_size-1];
    wire [bit_width-1:0] left_feed [0:systolic_size-1];
    wire [(bit_width*2)-1:0] mat   [0:systolic_size-1][0:systolic_size-1];
    wire valid_wire [0:systolic_size-1];
    

    systolic_array #(
        .systolic_size(systolic_size),
        .bit_width(bit_width)
    ) sa (
        .clk(clk), .rst(rst),
        .in_a(left_feed), .in_b(top_feed),
        .out_c(mat)
    );

    genvar i;

    generate
        for (i=0; i<systolic_size; i=i+1) begin : gen_feeders
            feeder #(.systolic_size(systolic_size), .bit_width(bit_width)) feed_top (
                .clk(clk), .rst(rst),
                .valid(valid_wire[i]),
                .load(load),
                .data_i(data_b[i]),
                .data_o(top_feed[i])
            );
            feeder #(.systolic_size(systolic_size), .bit_width(bit_width)) feed_left (
                .clk(clk), .rst(rst),
                .valid(valid_wire[i]),
                .load(load),
                .data_i(data_a[i]),
                .data_o(left_feed[i])
            );
        end
    endgenerate

    assign valid_wire[0] = valid;

    // DFF chain: create systolic_size-1 flops, NOT systolic_size
    generate
        for (i=0; i<systolic_size-1; i=i+1) begin : gen_skew
            dff d_chain(
                .clk(clk), .rst(rst),
                .d(valid_wire[i]),
                .q(valid_wire[i+1])
            );
        end
    endgenerate
    genvar r, c;
    generate
        for (r = 0; r < systolic_size; r = r + 1) begin : drive_out_r
            for (c = 0; c < systolic_size; c = c + 1) begin : drive_out_c
                assign data_c[r][c] = mat[r][c];
            end
        end
    endgenerate
endmodule
