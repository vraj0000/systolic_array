module control #(
    parameter systolic_size = 2,
    parameter bit_width = 8
) (
    input clk, rst,
    input data_ready,
    output done, valid, load, rst_out
);


    (* mark_debug = "true" *) reg compute_done;

    localparam SA_IDLE      = 4'd0;
    localparam LOAD         = 4'd1;
    localparam COMPUTE      = 4'd2;
    localparam DONE         = 4'd3;
    reg r_valid;
    assign valid = r_valid;
    (* mark_debug = "true" *) reg [3:0] state;
    reg [3:0] next_state = SA_IDLE;

    reg [7:0] systolic_compute_conut;
    always @(posedge clk or posedge rst) begin
        if(rst) state <= SA_IDLE;
        else state <= next_state;
    end

    always @(*) begin
        next_state = state;
        case (state)
            
            SA_IDLE:    if(data_ready) next_state = LOAD;
            LOAD:       next_state = COMPUTE;
            COMPUTE:    if(compute_done)next_state = DONE;
            DONE:       next_state = SA_IDLE;

            default: next_state = SA_IDLE;
        endcase
    end


    reg start_counting;
    always @(posedge clk or posedge rst) begin
        if(rst) r_valid <= 0;
        else r_valid <= ((systolic_compute_conut < systolic_size) & state == COMPUTE);
    end
    assign load = (state == LOAD);
//    assign valid = ((systolic_compute_conut < systolic_size) & state == COMPUTE);
    assign done = state == DONE;
    assign rst_out = (state == SA_IDLE || rst);

    always @(posedge clk) begin
        case (state)
            SA_IDLE: begin
                compute_done   <= 0;
                start_counting <= 0;
            end
            LOAD: begin
                systolic_compute_conut <= 0;
            end
            COMPUTE: begin
                start_counting         <= 1;
                systolic_compute_conut <= systolic_compute_conut + 1;
                if (systolic_compute_conut == ((2*systolic_size)-1)) begin
                    compute_done <= 1;
                end
            end
            default: begin
                compute_done   <= 0;
                start_counting <= 0;
            end
        endcase
    end
    


endmodule