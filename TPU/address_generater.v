module address_generater #(
    parameter bit_width = 8,
    parameter mem_size = 16
) (
    input clk, rst,
    input c_ready,
    input ab_ready,
    input load_ab, load_c,
    input [$clog2(mem_size) - 1 : 0] addr_a_load, addr_b_load, addr_c_load,

    output [$clog2(mem_size) - 1 : 0] addr_a, addr_b, addr_c;

);

    reg [$clog2(mem_size) - 1 : 0] addr_a_r, addr_b_r, addr_c_r;

    always @(posedge clk) begin
        if (rst) begin
            addr_a_r <= 0;
            addr_b_r <= 0;
            addr_c_r <= 0;
        end else if (load_ab | load_c) begin
            addr_a_r <= addr_a_load;
            addr_b_r <= addr_b_load;
            addr_c_r <= addr_c_load;
        end else begin
            addr_a_r <= ab_ready ? ab_ready + 1 : addr_a_r;
            addr_b_r <= ab_ready ? ab_ready + 1 : addr_b_r;
            addr_c_r <= c_ready ? ab_ready + 1 : addr_c_r;
        end
    end



endmodule