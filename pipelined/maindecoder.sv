module maindecoder #(
    parameters  OP_WIDTH = 7
) (
    input   logic [OP_WIDTH-1:0]    opcode_i,
    output  logic [1:0]             ResultSrc,
    output  logic                   MEMWrite_o,
    output  logic                   Branch,
    output  logic []                ALUSrc,

);
    
endmodule