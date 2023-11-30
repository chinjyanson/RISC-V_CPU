module alu_top #(
    parameter CONTROL_WIDTH = 3,
    parameter DATA_WIDTH = 32 
)(
    input   wire                    clk,
    input   wire                    ALUsrc,
    input   wire [2:0]              ALUctrl,
    input   wire [DATA_WIDTH-1:0]   Instr,
    input   wire                    RegWrite,
    input   wire [DATA_WIDTH-1:0]   ImmOp,
    output  wire                    EQ,
    output  wire [DATA_WIDTH-1:0]   a0
);

wire [DATA_WIDTH-1:0] ALUResult;
wire [DATA_WIDTH-1:0] SrcA;
wire [DATA_WIDTH-1:0] SrcB;
wire [DATA_WIDTH-1:0] regOp2;

regfile register(
    .clk(clk),
    .Instr(Instr),
    .WE3(RegWrite),
    .WD3(ALUResult),
    .RD1(SrcA),
    .RD2(regOp2),
    .a0(a0)
);

mux2 ALUMux(
    .ALUsrc(ALUsrc),
    .regOp2(regOp2),
    .ImmOp(ImmOp),
    .ALUop2(SrcB)
);

alu ALU(
    .ALUctrl(ALUctrl),
    .ALUop1(SrcA),
    .ALUop2(SrcB),
    .SUM(ALUResult),
    .EQ(EQ)
);

endmodule
