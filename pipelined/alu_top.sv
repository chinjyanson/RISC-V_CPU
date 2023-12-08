module alu_top #(
    parameter CONTROL_WIDTH = 3,
    parameter DATA_WIDTH = 32 
)(
    input   wire                        clk,
    input   wire                        ALUsrcD_i,
    input   wire [CONTROL_WIDTH-1:0]    ALUctrlD_i,
    input   wire [DATA_WIDTH-1:0]       InstrD_i,
    input   wire [2:0]                  RegWriteD_i,
    input   wire [1:0]                  ResultSrc_i,
    input   wire [1:0]                  MemWrite_i,
    input   wire [DATA_WIDTH-1:0]       ExtImmD_i,
    input   wire [DATA_WIDTH-1:0]       PCPlus4D_i,
    input   wire                        JumpD_i,
    input   wire                        BranchD_i, 
    input   wire [DATA_WIDTH-1:0]       PCD_i,
    input   wire [4:0]                  Rs1D_i,
    input   wire [4:0]                  Rs2D_i,
    input   wire [4:0]                  RdD_i,
    output  wire [DATA_WIDTH-1:0]       a0,  //(debug output)
    output  wire [DATA_WIDTH-1:0]       ALUResult_o,
    output  wire [DATA_WIDTH-1:0]       PCTargetE_o,
    output  wire [1:0]                  PCSrcE_o
);

//Data Logic ResultWriteD
wire [DATA_WIDTH-1:0] RD1D;
wire [DATA_WIDTH-1:0] RD2D;
wire [DATA_WIDTH-1:0] Result;
wire [DATA_WIDTH-1:0] regOp2;
wire [DATA_WIDTH-1:0] ReadData;

//Execute Logic
wire [2:0]              RegWriteE;
wire [1:0]              ResultSrcE;
wire [1:0]              MemWriteE;
wire                    JumpE;
wire                    BranchE;
wire [2:0]              ALUControlE;
wire                    ALUsrcE;
wire [DATA_WIDTH-1:0]    RD1E;
wire [DATA_WIDTH-1:0]    RD2E;
wire [DATA_WIDTH-1:0]    PCE;
wire [4:0]               Rs1E;
wire [4:0]               Rs2E;
wire [4:0]               RdE;
wire [DATA_WIDTH-1:0]    PCPlus4E;
wire [DATA_WIDTH-1:0]    SrcAE;
wire [DATA_WIDTH-1:0]    SrcBE;
wire [DATA_WIDTH-1:0]    WriteDataE;
wire [DATA_WIDTH-1:0]    ExtImmE;
wire                     ZeroE;

//Memory Logic

wire [2:0]              RegWriteM;
wire [1:0]              ResultSrcM;
wire [1:0]              MemWriteM;
wire [4:0]              RdM;
wire [DATA_WIDTH-1:0]   WriteDataM;
wire [DATA_WIDTH-1:0]   PCPlusM;
wire [DATA_WIDTH-1:0]   ReadDataM;

//add logic here for PCSrcE_o -

regfile register(
    .clk        (clk),
    .Instr      (Instr_i),
    .WE3        (RegWriteW),
    .WD3        (ResultW),
    .RD1        (RD1D),
    .RD2        (RD2D),
    .a0         (a0)
);

mux2 ALUMux( // checked - SK 1/12/2023
    .control    (ALUSrcE),
    .input0     (WriteDataE),
    .input1     (ExtImmE),
    .out        (SrcBE)
);

alu ALU( // checked - SK 1/12/2023
    .ALUctrl    (ALUControlE),
    .SrcA       (SrcAE),
    .SrcB       (SrcBE),
    .ALUResult  (ALUResultE),
    .Zero       (ZeroE)
);

data_mem data(
    .clk        (clk),
    .A          (ALUResultM),
    .WD         (WriteDataM),
    .WE         (MemWriteM),
    .RD         (ReadDataM)
);

mux4 resultMux(
    .control    (ResultSrc_i),
    .input0     (ALUResult_o),
    .input1     (ReadData),
    .input2     (PCPlus4_i),
    .out        (Result)
);

mux4 RD1EHazardMux(
    .control    (FowardAE),
    .input0     (RD1E),
    .input1     (ResultW),
    .input2     (ALUResultM),
    .out        (SrcAE)
);

mux4 RD2EHazardMux(
    .control    (FowardBE),
    .input0     (RD2E),
    .input1     (ResultW),
    .input2     (ALUResultM),
    .out        (WriteDataE)
);

adder addPCTargetE(
    .input0 (PCE),
    .input1 (ExtImmE),
    .out    (PCTargetE)
);

reg_dec DREg(
    //inputs - D
    .RegWriteD(RegWriteD_i),
    .ResultSrcD(ResultSrc_i),
    .MemWriteD(MemWriteD_i),
    .JumpD(JumpD_i),
    .BranchD(BranchD_i),
    .ALUControlD(ALUControlD_i),
    .ALUsrcD(ALUsrcD_i),
    .RD1D(RD1D),
    .RD2D(RD2D),
    .PCD(PCD_i),
    .Rs1D(Rs1D_i),
    .Rs2D(Rs2D_i),
    .RdD(RdD_i),
    .ExtImmD(ExtImmD_i)
    .PCPlus4D(PCPlus4D_i),

    //outputs - E
    .RegWriteE(RegWriteE),
    .ResultSrcE(ResultSrcE),
    .MemWriteE(MemWriteE),
    .JumpE(JumpE)
    .BranchE(BranchE),
    .ALUControlE(ALUControlE),
    .ALUsrcE(ALUsrE),
    .RD1E(RD1E),
    .RD2E(RD2E),
    .PCE(PCE),
    .Rs1E(Rs1E),
    .Rs2E(Rs2E),
    .RdE(RdE),
    .ExtImmE(ExtImmE),
    .PCPlus4E(PCPlus4E)
);

reg_execute EREG(
    .clk(clk),
    //inputs E
    .RegWriteE(RegWriteE),
    .ResultSrcE(ResultSrcE),
    .MemWriteE(MemWriteE),
    .ALUResultE(ALUResultE),
    .WriteDataE(WriteDataE),
    .RdE(RdE),
    .PCPlus4E(PCPlus4E),

    //outputs M
    .RegWriteM(RegWriteM),    
    .ResultSrcM(ResultSrcM),
    .MemWriteM(MemWriteM),
    .ALUResultM(ALUResultM),
    .WriteDataM(WriteDataM),
    .RdM(RdM),
    .PCPlus4M(PCPlus4M)
);

reg_write WREG(
    //input M
    .clk(clk),
    .RegWriteM(RegWriteM),    
    .ResultSrcM(ResultSrcM),
    .WriteDataM(WriteDataM),
    .ReadDataM(ReadDataM),
    .RdM(RdM),
    .PCPlus4M(PCPlus4M),

    //outputs W
    .RegWriteW(RegWriteW), 
    .ResultSrcW(ResultSrcW),
    .WriteDataW(WriteDataW),
    .ReadDataW(ReadDataW),
    .RdW(RdW),
    .PCPlus4W(PCPlus4W)
);
endmodule
