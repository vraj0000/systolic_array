module control #(
    parameter systolic_size = 2,
    parameter bit_width = 8
) (
    input clk, rst,
    input data_ready,
    output done, valid, load, rst_out
);

    localparam SA_IDLE      = 4'd0;
    localparam LOAD         = 4'd1;
    localparam COMPUTE      = 4'd2;
    localparam DONE         = 4'd3;

    reg [3:0] state;
    reg [3:0] next_state = SA_IDLE;
    reg [7:0] systolic_compute_conut;

    always @(posedge clk or posedge rst) begin
        if(rst) state <= SA_IDLE;
        else state <= next_state;
    end

    wire compute_done = (state == COMPUTE) && (systolic_compute_conut == (3 * systolic_size - 2));

    always @(*) begin
        next_state = state;
        case (state)
            SA_IDLE:    if(data_ready) next_state = LOAD;
            LOAD:       next_state = COMPUTE;
            COMPUTE:    if(compute_done) next_state = DONE;
            DONE:       next_state = SA_IDLE;
            default:    next_state = SA_IDLE;
        endcase
    end

    always @(posedge clk or posedge rst) begin
        if(rst) begin
            systolic_compute_conut <= 0;
        end 
        else begin
            if (state == COMPUTE) begin
                systolic_compute_conut <= systolic_compute_conut + 1;
            end else begin
                systolic_compute_conut <= 0;
            end
        end
    end

    assign load    = (state == LOAD);
    assign valid   = (state == COMPUTE) && (systolic_compute_conut < systolic_size);
    assign done    = (state == DONE);
    assign rst_out = (state == SA_IDLE || rst);

endmodule
