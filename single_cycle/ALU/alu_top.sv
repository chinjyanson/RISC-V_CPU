module alu_top #(
    parameter CONTROL_WIDTH = 3,
    parameter DATA_WIDTH = 32 
)(
    input   wire                        clk,
    input   wire                        ALUsrc,
    input   wire [CONTROL_WIDTH-1:0]    ALUctrl,
    input   wire [DATA_WIDTH-1:0]       Instr,
    input   wire                        RegWrite,
    input   wire [DATA_WIDTH-1:0]       ImmOp,
    output  wire                        Zero,
    output  wire [DATA_WIDTH-1:0]       a0
);

wire [DATA_WIDTH-1:0] ALUResult;
wire [DATA_WIDTH-1:0] SrcA;
wire [DATA_WIDTH-1:0] SrcB;
wire [DATA_WIDTH-1:0] regOp2;

regfile register(
    .clk        (clk),
    .Instr      (Instr),
    .WE3        (RegWrite),
    .WD3        (ALUResult),
    .RD1        (SrcA),
    .RD2        (regOp2),
    .a0         (a0)
);

mux2 ALUMux( // checked - SK 1/12/2023
    .control    (ALUsrc),
    .input0     (regOp2),
    .input1     (ImmOp),
    .out        (SrcB)
);

alu ALU( // checked - SK 1/12/2023
    .ALUctrl    (ALUctrl),
    .SrcA       (SrcA),
    .SrcB       (SrcB),
    .ALUResult  (ALUResult),
    .Zero       (Zero)
);

endmodule
