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
    output  logic [1:0]             ImmSrc
);

logic [10:0] controls
assign {RegWrite, ResultSrc, MemWrite, Jump, Branch, ALUSrc, ImmSrc, ALUOp} = controls;

always_comb
    case (op)
        // RegWrite_ResultSrc_MemWrite_Jump_Branch_ALUSrc_ImmSrc_ALUOp
        7'b0000011: controls = 11'b1_01_0_0_0_1_00_00; // lw
        7'b0100011: controls = 11'b0_00_1_0_0_1_01_00; // sw
        7'b0110011: controls = 11'b1_00_0_0_0_0_xx_10; // R-type
        7'b1100011: controls = 11'b0_00_0_0_1_0_10_01; // B-type (beq)
        7'b0010011: controls = 11'b1_00_0_0_0_0_00_10; // I-type (ALUSrc is 1 - double check)
        7'b1101111: controls = 11'b1_10_0_1_0_0_11_00; // jal
        7'b1100111: controls = 11'b1_10_0_1_0_1_00_00; // jalr
        7'b0000000: controls = 11'b0_00_0_0_0_0_00_00; // for default values on reset
        default: controls = 11'bx_xx_x_x_x_x_xx_xx; // instr not implemented
    endcase
endmodule