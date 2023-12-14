module riscv(input logic clk, reset,
	output logic [31:0] PCF,
	input logic [31:0] InstrF,
	output logic MemWriteM,
	output logic [31:0] ALUResultM, WriteDataM,
	input logic [31:0] ReadDataM
);
	
logic ALUSrcAE, RegWriteM, RegWriteW, ZeroE, SignE, PCJalSrcE, PCSrcE;
logic [1:0] ALUSrcBE;
logic StallD, StallF, FlushD, FlushE, ResultSrcE0;
logic [1:0] ResultSrcW; 
logic [2:0] ImmSrcD;
logic [3:0] ALUControlE;
logic [31:0] InstrD;
logic [4:0] Rs1D, Rs2D, Rs1E, Rs2E;
logic [4:0] RdE, RdM, RdW;
logic [1:0] ForwardAE, ForwardBE;

controller c(
	.clk(clk),
	.reset(reset),
	.op(InstrD[6:0]),
	.funct3(InstrD[14:12]),
	.funct7b5(InstrD[30]),
	.ZeroE(ZeroE),
	.FlushE(FlushE),
	.ResultSrcW(ResultSrcW),
	.MemWriteM(MemWriteM),
	.PCSrcE(PCSrcE),
	.PCJalSrcE(PCJalSrcE),
	.ALUSrcE(ALUSrcE),
	.RegWriteW(RegWriteW),
	.RegWriteM(RegWriteM),
	.ImmSrcD(ImmSrcD),
	.ALUControlE(ALUControlE)
);

hazardunit h(Rs1D, Rs2D, Rs1E, Rs2E, RdE, RdM, RdW, RegWriteM, RegWriteW, ResultSrcE0, PCSrcE, ForwardAE, ForwardBE, StallD, StallF, FlushD, FlushE);

datapath dp(clk, reset, ResultSrcW, PCJalSrcE, PCSrcE,ALUSrcAE, ALUSrcBE, RegWriteW, ImmSrcD, ALUControlE, ZeroE, SignE, PCF, InstrF, InstrD, ALUResultM, WriteDataM, ReadDataM, ForwardAE, ForwardBE, Rs1D, Rs2D, Rs1E, Rs2E, RdE, RdM, RdW, StallD, StallF, FlushD, FlushE);

endmodule

