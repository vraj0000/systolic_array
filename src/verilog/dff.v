module dff (

    input clk,
    input rst,
    input d,
    output q
);

    reg r_q;
    assign q = r_q;
    always @(posedge clk or posedge rst) begin

        if (rst)    r_q <= 0;
        else        r_q <= d;
    end

endmodule