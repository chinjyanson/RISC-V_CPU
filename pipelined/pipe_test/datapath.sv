/*
	Function: Datapath with 5 pipelined stages
*/

module datapath #(
    parameter DATA_WIDTH = 32
) (
    input   logic                   clk,
    input   logic                   reset,

    input   logic [1:0]             ResultSrcW,
    input   logic                   PCJalSrcE,
    input   logic                   PCSrcE,
    input   logic                   ALUSrcE,
    input   logic                   RegWriteW,
    input   logic [2:0]             ImmSrcD,
    input   logic [2:0]             ALUControlD,
    input   logic [DATA_WIDTH-1:0]  InstrF,

    input   logic                   StallD,
    input   logic                   StallF,
    input   logic                   FlushD, 
    input   logic                   FlushE,
    input   logic [DATA_WIDTH-1:0]  ReadDataM,
    input   logic [1:0]             ForwardAE,
    input   logic [1:0]             ForwardBE,

    output  logic                   ZeroE,
    output  logic                   PCF,
    output  logic [DATA_WIDTH-1:0]  InstrD, 
    output  logic [DATA_WIDTH-1:0]  ALUResultM, 
    output  logic [DATA_WIDTH-1:0]  WriteDataM,

    output  logic [4:0]             Rs1D, 
    output  logic [4:0]             Rs2D,
    output  logic [4:0]             Rs1E,
    output  logic [4:0]             Rs1E,
    output  logic [4:0]             RdE,
    output  logic [4:0]             RdM, 
    output  logic [4:0]             RdW

    output  logic                   a0; // debug output

);

logic [DATA_WIDTH-1:0] PCD, PCE, ALUResultE, ALUResultW, ReadDataW;
logic [DATA_WIDTH-1:0] PCNextF, PCPlus4F, PCPlus4D, PCPlus4E, PCPlus4M, PCPlus4W, PCTargetE, BranJumpTargetE;
logic [DATA_WIDTH-1:0] WriteDataE;
logic [DATA_WIDTH-1:0] ExtImmD, ExtImmE;
logic [DATA_WIDTH-1:0] SrcAE, SrcBE, RD1D, RD2D, RD1E, RD2E;
logic [DATA_WIDTH-1:0] ResultW;
logic [4:0]            RdB;

// Fetch Stage
mux2 jal_r(
    .control(PCJalSrcE),
    .input0(PCTargetE), 
    .input1(ALUResultE),
    .out(BranJumpTargetE)
);
mux2 pcmux(
    .control(PCSrcE),
    .input0(PCPlus4F),
    .input1(BranJumpTargetE),
    .out(PCNextF)
);
flopenr IF(
    .clk(clk),
    .reset(reset),
    .en(~StallF),
    .d(PCNextF),
    .q(PCF)
);
imem im(
    .a(PCF),
    .rd(InstrF)
);
adder pcadd4(
    .input0(PCF),
    .input1(32'd4),
    .out(PCPlus4F)
);

// Instruction Fetch - Decode Pipeline Register
reg_Ftc_Dec pipreg0(
    .clk(clk),
    .reset(reset),
    .clear(FlushD),
    .en(~StallD),

    .InstrF(InstrF),
    .PCF(PCF),
    .PCPlus4F(PCPlus4F),

    .InstrD(InstrD),
    .PCD(PCD),
    .PCPlus4D(PCPlus4D)
);
assign Rs1D = InstrD[19:15];
assign Rs2D = InstrD[24:20];
assign RdD = InstrD[11:7];
regfile rf(
    .clk(clk),
    .WE3(RegWriteW),
    .WD3(ResultW),
    .A1_i(Rs1D),
    .A2_i(Rs2D),
    .A3_i(RdD),
    .RD1D(RD1D),
    .RD2D(RD2D),
    .a0(a0)
);
sign_extend ext(
    .instr(InstrD[31:7]),
    .ImmSrc(ImmSrcD),
    .ExtImm(ExtImmD)
);

// Decode - Execute Pipeline Register 
reg_Dec_Exc pipreg1(
    .clk(clk),
    .reset(reset),
    .clear(FlushE),

    .RD1D(RD1D),
    .RD2D(RD2D),
    .PCD(PCD),
    .Rs1D(Rs1D),
    .Rs2D(Rs2D),
    .RdD(RdD),
    .ExtImmD(ExtImmD),
    .PCPlus4D(PCPlus4D),

    .RD1E(RD1E),
    .RD2E(RD2E),
    .PCE(PCE),
    .Rs1E(Rs1E),
    .Rs2E(Rs2E),
    .RdE(RdE),
    .ExtImmE(ExtImmE),
    .PCPlus4E(PCPlus4E)
);
mux3 forwardMuxA(
    .control(SrcAE),
    .input0(RD1E),
    .input1(ResultW),
    .input2(ALUResultM),
    .out(ForwardAE)
);
mux3 forwardMuxB(
    .control(SrcBE),
    .input0(RD2E),
    .input1(ResultW),
    .input2(ALUResultM),
    .out(ForwardBE)
);
adder pcAddBranch(
    .input0(PCE),
    .input1(ExtImmE),
    .out(PCTargetE) // next PC for jump and branch instr
)

// Execute - Memory Access Pipeline Register 
reg_Exc_Mem pipreg2(
    .clk(clk),
    .reset(reset),

    .ALUResultE(ALUResultE),
    .WriteDataE(WriteDataE),
    .RdE(RdE),
    .PCPlus4E(PCPlus4E),

    .ALUResultM(ALUResultM),
    .WriteDataM(WriteDataM),
    .RdM(RdM),
    .PCPlus4M(PCPlus4M)
);
dmem dm(
);

// Memory - Register Writeback Stage
reg_Mem_Wrt pipreg3(
    .clk(clk),
    .reset(reset),

    .ALUResultM(ALUResultM),
    .ReadDataM(ReadDataM),
    .RdM(RdM),
    .PCPlus4M(PCPlus4M),

    .ALUResultW(ALUResultW),
    .ReadDataW(ReadDataW),
    .RdW(RdW),
    .PCPlus4W(PCPlus4W)
);

mux3 resmux(
    .control(ResultSrcW),
    .input0(ALUResultW),
    .input1(ReadDataW),
    .input2(PCPlus4W),
    .out(ResultW)
);

endmodule
