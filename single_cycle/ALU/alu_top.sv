module alu_top #(
    parameter CONTROL_WIDTH = 3,
    parameter DATA_WIDTH = 32 
)(
    input   wire                        clk,
    input   wire                        ALUsrc,
    input   wire [CONTROL_WIDTH-1:0]    ALUctrl,
    input   wire [DATA_WIDTH-1:0]       Instr,
    input   wire                        RegWrite,
    input   wire [1:0]                  ResultSrc,
    input   wire                        MemWrite,
    input   wire [DATA_WIDTH-1:0]       ImmOp,
    input   wire                        PCPlus4,
    output  wire                        Zero,
    output  wire [DATA_WIDTH-1:0]       a0,  //(debug output)
    output  wire [DATA_WIDTH-1:0]       ALUResult
);


wire [DATA_WIDTH-1:0] SrcA;
wire [DATA_WIDTH-1:0] SrcB;
wire [DATA_WIDTH-1:0] Result;
wire [DATA_WIDTH-1:0] regOp2;
wire [DATA_WIDTH-1:0] ReadData;

regfile register(
    .clk        (clk),
    .Instr      (Instr),
    .WE3        (RegWrite),
    .WD3        (Result),
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

data_mem data(
    .clk        (clk),
    .A          (ALUResult),
    .WD         (regOp2),
    .WE         (MemWrite),
    .RD         (ReadData),
);

mux4 resultMux(
    .control    (ResultSrc),
    .input0     (ReadData),
    .input1     (ALUResult),
    .input2     (PCPlus4),
    .out        (Result)
);

endmodule
