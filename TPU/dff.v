module dff #(
    parameter bit_width = 8
)(

    input clk,
    input rst,
    input [bit_width-1:0] d,
    output [bit_width-1:0] q
);

    reg [bit_width-1:0] r_q;
    
    assign q = r_q;
    always @(posedge clk or posedge rst) begin

        if (rst)    r_q <= 0;
        else        r_q <= d;
    end

endmodule