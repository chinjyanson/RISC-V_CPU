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

    output  logic                   ZeroE,
    output  logic                   PCF,
    input   logic [DATA_WIDTH-1:0]  InstrF,
    input   logic [DATA_WIDTH-1:0]   

);

logic [DATA_WIDTH-1:0] PCD, PCE, ALUResultE, ALUResultW, ReadDataW;
endmodule
