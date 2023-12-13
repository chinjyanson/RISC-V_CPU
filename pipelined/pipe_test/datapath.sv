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
adder pcadd4(
    .input0(PCF),
    .input1(32'd4),
    .out(PCPlus4F)
);

// Instruction Fetch - Decode Pipeline Register


// Execute - Memory Access Pipeline Register 
reg_E_M pipreg2(
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

// Memory - Register Writeback Stage
reg_Mem_Wrt pipreg3(
    
)
endmodule
