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
    input   logic                   FlushE
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
    output  logic [4:0]             RdW,

);

logic [DATA_WIDTH-1:0] PCD, PCE, ALUResultE, ALUResultW, ReadDataW;

endmodule
