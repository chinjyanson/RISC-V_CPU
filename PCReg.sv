module PCReg #(
    parameter ADDRESS_WIDTH = 8,

)(
    input logic                        clk,
    input logic                        rst,
    input logic  [ADDRESS_WIDTH-1:0]   next_PC,
    output logic [ADDRESS_WIDTH-1:0]      PC

);



//synchronous reset
always_ff @(posedge clk) begin 
    if(rst) PC <= {ADDRESS_WIDTH{1'b0}};
    else PC <= next_PC;
end 
endmodule 
