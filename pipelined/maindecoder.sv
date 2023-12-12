module maindecoder #(
    parameters  OP_WIDTH = 7
) (
    input   logic [OP_WIDTH-1:0]    op,
    output  logic [1:0]             ResultSrc,
    output  logic                   MemWrite,
    output  logic                   Branch,
    output  logic                   ALUSrc,
    output  logic                   RegWrite,
    output  logic                   Jump,
    output  logic [1:0]             ALUOp,
    output  logic [2:0]             ImmSrc
);

logic [11:0] controls;

assign {RegWrite, ResultSrc, MemWrite, Jump, Branch, ALUSrc, ImmSrc, ALUOp} = controls;

always_comb
    case (op)
        // RegWrite_ResultSrc_MemWrite_Jump_Branch_ALUSrc_ImmSrc_ALUOp
        7'b0000011: controls = 12'b1_01_0_0_0_1_000_00; // lw
        7'b0100011: controls = 12'b0_00_1_0_0_1_010_00; // sw
        7'b0110011: controls = 12'b1_00_0_0_0_0_xxx_10; // R-type
        7'b1100011: controls = 12'b0_00_0_0_1_0_010_01; // B-type (beq)
        7'b0010011: controls = 12'b1_00_0_0_0_0_000_10; // I-type (ALUSrc is 1 - double check)
        7'b0110111: controls = 12'b1_00_0_0_0_1_100_00; // lui 
        7'b1101111: controls = 12'b1_10_0_1_0_0_011_00; // jal
        7'b1100111: controls = 12'b1_10_0_1_0_1_000_00; // jalr
        7'b0000000: controls = 12'b0_00_0_0_0_0_000_00; // for default values on reset
        default: controls = 12'bx_xx_x_x_x_x_xxx_xx; // instr not implemented
    endcase
endmodule