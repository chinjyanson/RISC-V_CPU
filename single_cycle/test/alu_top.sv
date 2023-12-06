module alu_top #(
    parameter CONTROL_WIDTH = 3,
    parameter DATA_WIDTH = 32 
)(
    input   wire                        clk,
    input   wire                        ALUsrc_i,
    input   wire [CONTROL_WIDTH-1:0]    ALUctrl_i,
    input   wire [DATA_WIDTH-1:0]       Instr_i,
    input   wire                        RegWrite_i,
    input   wire [1:0]                  ResultSrc_i,
    input   wire                        MemWrite_i,
    input   wire [DATA_WIDTH-1:0]       ImmOp_i,
    input   wire [DATA_WIDTH-1:0]       PCPlus4_i,
    output  wire                        Zero_o,
    output  wire [DATA_WIDTH-1:0]       a0,  //(debug output)
    output  wire [DATA_WIDTH-1:0]       ALUResult_o
);


wire [DATA_WIDTH-1:0] SrcA;
wire [DATA_WIDTH-1:0] SrcB;
wire [DATA_WIDTH-1:0] Result;
wire [DATA_WIDTH-1:0] regOp2;
wire [DATA_WIDTH-1:0] ReadData;

regfile register(
    .clk        (clk),
    .Instr      (Instr_i),
    .WE3        (RegWrite_i),
    .WD3        (Result),
    .RD1        (SrcA),
    .RD2        (regOp2),
    .a0         (a0)
);

mux2 ALUMux( // checked - SK 1/12/2023
    .control    (ALUsrc_i),
    .input0     (regOp2),
    .input1     (ImmOp_i),
    .out        (SrcB)
);

alu ALU( // checked - SK 1/12/2023
    .ALUctrl    (ALUctrl_i),
    .SrcA       (SrcA),
    .SrcB       (SrcB),
    .ALUResult  (ALUResult_o),
    .Zero       (Zero_o)
);

data_mem data(
    .clk        (clk),
    .A          (ALUResult_o),
    .WD         (regOp2),
    .WE         (MemWrite_i),
    .RD         (ReadData)
);

mux4 resultMux(
    .control    (ResultSrc_i),
    .input0     (ALUResult_o),
    .input1     (ReadData),
    .input2     (PCPlus4_i),
    .out        (Result)
);

endmodule