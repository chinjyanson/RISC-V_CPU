module alu #(
    parameter CONTROL_WIDTH = 3,
    parameter DATA_WIDTH = 32
)(
    input   logic   [CONTROL_WIDTH-1:0] ALUctrl,
    input   logic   [DATA_WIDTH-1:0]    SrcA,
    input   logic   [DATA_WIDTH-1:0]    SrcB,
    output  logic   [DATA_WIDTH-1:0]    ALUResult,
    output  logic                       EQ
);

always_comb begin

    case (ALUctrl)
    3'b000: ALUResult = SrcA + SrcB;
    3'b001: ALUResult = SrcA - SrcB;
    3'b010: ALUResult = SrcA & SrcB;
    3'b011: ALUResult = SrcA | SrcB;
    3'b100: ALUResult = SrcA ^ SrcB;

    default: ALUResult = 0;

    endcase 

    assign EQ = (SrcA == SrcB);

end 

endmodule
