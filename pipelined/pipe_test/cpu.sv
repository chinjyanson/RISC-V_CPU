module cpu(input logic clk, reset,
	output logic [31:0] PCF,
	input logic [31:0] InstrF,
	output logic MemWriteM,
	output logic [31:0] ALUResultM, WriteDataM,
	input logic [31:0] ReadDataM
);
	
logic ALUSrcAE, RegWriteM, RegWriteW, ZeroE, SignE, PCJalSrcE, PCSrcE;
logic [1:0] ALUSrcE;
logic StallD, StallF, FlushD, FlushE, ResultSrcE0;
logic [1:0] ResultSrcW; 
logic [2:0] ImmSrcD;
logic [3:0] ALUControlE;
logic [31:0] InstrD;
logic [4:0] Rs1D, Rs2D, Rs1E, Rs2E;
logic [4:0] RdE, RdM, RdW;
logic [1:0] ForwardAE, ForwardBE;

controller c(clk, reset, InstrD[6:0], InstrD[14:12], InstrD[30], ZeroE, SignE, FlushE, ResultSrcE0, ResultSrcW, MemWriteM, PCJalSrcE, PCSrcE, ALUSrcAE, ALUSrcBE, RegWriteM, RegWriteW, ImmSrcD, ALUControlE);

hazardunit h (Rs1D, Rs2D, Rs1E, Rs2E, RdE, RdM, RdW, RegWriteM, RegWriteW, ResultSrcE0, PCSrcE, ForwardAE, ForwardBE, StallD, StallF, FlushD, FlushE);

datapath dp
(
	.clk(clk), 
	.reset(reset), 
	.ResultSrcW(ResultSrcW), 
	.PCJalSrcE(PCJalSrcE), 
	.PCSrcE(PCSrcE),
	.ALUSrcE (ALUSrcE), 
	.RegWriteW(RegWriteW), 
	.ImmSrcD(ImmSrcD), 
	.ALUControlE(ALUControlE), 
	.ZeroE(ZeroE),
	.InstrD(InstrD), 
	.ForwardAE(ForwardAE), 
	.ForwardBE(ForwardBE), 
	.Rs1E(Rs1E), 
	.Rs2E(Rs2E), 
	.RdE(RdE), 
	.RdM(RdM), 
	.RdW(RdW), 
	.StallD(StallD), 
	.StallF(StallF), 
	.FlushD(FlushD), 
	.FlushE(FlushE)
);

endmodule

