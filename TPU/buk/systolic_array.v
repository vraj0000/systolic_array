module systolic_array #(
    parameter systolic_size = 2,
    parameter bit_width = 8
) (
    input clk, rst,
    input drain,
    input switch,
    input  [bit_width-1:0]     in_a [0:systolic_size-1],
    input  [bit_width-1:0]     in_b [0:systolic_size-1],
    output [(bit_width*2)-1:0] out_acc_0 [0:systolic_size-1],   // bottom row, bank 0 chain
    output [(bit_width*2)-1:0] out_acc_1 [0:systolic_size-1]    // bottom row, bank 1 chain
);

    wire [bit_width-1:0]     a_bus [0:systolic_size-1][0:systolic_size];
    wire [bit_width-1:0]     b_bus [0:systolic_size][0:systolic_size-1];

    // one extra row each, now at the TOP (index 0) for the zero source
    wire [(bit_width*2)-1:0] acc0_bus [0:systolic_size][0:systolic_size-1];
    wire [(bit_width*2)-1:0] acc1_bus [0:systolic_size][0:systolic_size-1];

    // ---------------------------------------------------------------
    // Skew ladders: in_a[i] delayed by i cycles, in_b[j] delayed by j cycles.
    // a_stage[i][0] = in_a[i] (undelayed tap)
    // a_stage[i][k] = a_stage[i][k-1] passed through one dff, k = 1..i
    // a_stage[i][i] is the fully-skewed value that actually enters the array.
    // ---------------------------------------------------------------
    wire [bit_width-1:0] a_stage [0:systolic_size-1][0:systolic_size-1];
    wire [bit_width-1:0] b_stage [0:systolic_size-1][0:systolic_size-1];

    genvar i, j, k, bit_idx;
    generate
        // ---- row skew ladder for in_a ----
        for (i = 0; i < systolic_size; i = i+1) begin : A_SKEW_ROW
            assign a_stage[i][0] = in_a[i];
            for (k = 1; k <= i; k = k+1) begin : A_SKEW_STAGE
                for (bit_idx = 0; bit_idx < bit_width; bit_idx = bit_idx+1) begin : A_SKEW_BIT
                    dff u_dff_a (
                        .clk (clk),
                        .rst (rst),
                        .d   (a_stage[i][k-1][bit_idx]),
                        .q   (a_stage[i][k][bit_idx])
                    );
                end
            end
            // feed the fully-skewed tap (index i) into the array's left edge
            assign a_bus[i][0] = a_stage[i][i];
        end

        // ---- column skew ladder for in_b ----
        for (j = 0; j < systolic_size; j = j+1) begin : B_SKEW_COL
            assign b_stage[j][0] = in_b[j];
            for (k = 1; k <= j; k = k+1) begin : B_SKEW_STAGE
                for (bit_idx = 0; bit_idx < bit_width; bit_idx = bit_idx+1) begin : B_SKEW_BIT
                    dff u_dff_b (
                        .clk (clk),
                        .rst (rst),
                        .d   (b_stage[j][k-1][bit_idx]),
                        .q   (b_stage[j][k][bit_idx])
                    );
                end
            end
            // feed the fully-skewed tap (index j) into the array's top edge
            assign b_bus[0][j] = b_stage[j][j];
        end

        // Top boundary: nothing above row 0, so the drain source coming "in" is zero
        for (j = 0; j < systolic_size; j = j+1) begin : TOP_DRAIN_IN
            assign acc0_bus[0][j] = {(bit_width*2){1'b0}};
            assign acc1_bus[0][j] = {(bit_width*2){1'b0}};
        end

        for (i = 0; i < systolic_size; i = i+1) begin : ROW
            for (j = 0; j < systolic_size; j = j+1) begin : COL

                wire [bit_width-1:0] a_here = a_bus[i][j];
                wire [bit_width-1:0] b_here = b_bus[i][j];

                pe #(.bit_width(bit_width)) U (
                    .clk          (clk),
                    .rst          (rst),
                    .in_a         (a_here),
                    .in_b         (b_here),
                    .drain_data_0 (acc0_bus[i][j]),     // from PE above (or top boundary zero)
                    .drain_data_1 (acc1_bus[i][j]),
                    .drain        (drain),
                    .switch       (switch),
                    .out_a        (a_bus[i][j+1]),
                    .out_b        (b_bus[i+1][j]),
                    .out_acc_0    (acc0_bus[i+1][j]),   // passed down to PE below
                    .out_acc_1    (acc1_bus[i+1][j])
                );
            end
        end

        // Bottom row is what the outside world reads
        for (j = 0; j < systolic_size; j = j+1) begin : BOTTOM_OUT
            assign out_acc_0[j] = acc0_bus[systolic_size][j];
            assign out_acc_1[j] = acc1_bus[systolic_size][j];
        end
    endgenerate

endmodule