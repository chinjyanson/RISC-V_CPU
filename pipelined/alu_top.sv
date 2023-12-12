module alu_top #(
    parameter CONTROL_WIDTH = 3,
    parameter DATA_WIDTH = 32 
)(
    input   wire                        clk,
    input   wire                        Den_i,
    input   wire [DATA_WIDTH-1:0]       PCD_i,
    input   wire [4:0]                  Rs1D_i,
    input   wire [4:0]                  Rs2D_i,
    input   wire [4:0]                  RdD_i,
    input   wire [6:0]                  opcodeD_i,
    input   wire [1:0]                  FowardAE_i,
    input   wire [1:0]                  FowardBE_i,
    input   wire                        Den_i,
    input   wire                        Drst_i,
    input   wire [2:0]                  RegWriteW_i, 
    input   wire [1:0]                  MemWriteM_i, 
    input   wire [IMM_WIDTH-1:0]        ResultSrcW_i, 
    input   wire [CONTROL_WIDTH-1:0]    ALUcontrolE_i, 
    input   wire                        ALUsrcE_i, 
    
    
    output  wire [DATA_WIDTH-1:0]       a0,  //(debug output)
    output  wire [DATA_WIDTH-1:0]       PCTargetE_o,
    output  wire [1:0]                  PCSrcE_o,
    output  wire [6:0]                  opcodeE_o,
    output  wire [4:0]                  Rs1E_o,
    output  wire [4:0]                  Rs2E_o,
    output  wire [4:0]                  RdM_o,
    output  wire [4:0]                  RdW_o,
    output  wire [4:0]                  RdE_o,
    output  wire                        ZeroE_o
);


//Execute Logic
wire [DATA_WIDTH-1:0]    RD1E;
wire [DATA_WIDTH-1:0]    RD2E;
wire [DATA_WIDTH-1:0]    PCE;
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

//Write Logic
wire [DATA_WIDTH-1:0]   WriteDataW;
wire [DATA_WIDTH-1:0]   PCPlusW;
wire [DATA_WIDTH-1:0]   ReadDataW;
wire [DATA_WIDTH-1:0]   ALUResultW;
wire [DATA_WIDTH-1:0]   ResultW;


//add logic here for PCSrcE_o -

regfile register(
    .clk        (clk),
    .A1_i       (Rs1D_i),
    .A2_i       (Rs2D_i),
    .A3_i       (RdD_i),
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
    .control    (ResultsrcW),
    .input0     (ALUResultW),
    .input1     (ReadDataW),
    .input2     (PCPlus4W),
    .out        (ResultW)
);

mux4 RD1EHazardMux(
    .control    (FowardAE_i),
    .input0     (RD1E),
    .input1     (ResultW),
    .input2     (ALUResultM),
    .out        (SrcAE)
);

mux4 RD2EHazardMux(
    .control    (FowardBE_i),
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
    .clk(clk),
    .en(Den_i),
    .rst(Drst_i),
    .RD1D(RD1D_o),
    .RD2D(RD2D_o),
    .PCD(PCD_i),
    .Rs1D(Rs1D_i),
    .Rs2D(Rs2D_i),
    .RdD(RdD_i),
    .ExtImmD(ExtImmD_i),
    .PCPlus4D(PCPlus4D_i),
    .opcodeD(opcodeD_i),

    //outputs - E
    .RD1E(RD1E),
    .RD2E(RD2E),
    .PCE(PCE),
    .Rs1E(Rs1E_o),
    .Rs2E(Rs2E_o),
    .RdE(RdE_o),
    .ExtImmE(ExtImmE),
    .PCPlus4E(PCPlus4E),
    .opcodeE(opcodeE_o),
);

reg_execute EREG(
    .clk(clk),
    //inputs E
    .WriteDataE(WriteDataE),
    .RdE(RdE),
    .PCPlus4E(PCPlus4E),
    .ALUResultE(ALUResultE),

    //outputs M
    .ALUResultM(ALUResultM),
    .WriteDataM(WriteDataM),
    .RdM(RdM_o),
    .PCPlus4M(PCPlus4M)
);

reg_memory MREG(
    //input M
    .clk(clk),
    .ALUResultM(ALUResultM),
    .WriteDataM(WriteDataM),
    .ReadDataM(ReadDataM),
    .RdM(RdM_o),
    .PCPlus4M(PCPlus4M),

    //outputs W
    .ALUResultW(ALUResultW),
    .WriteDataW(WriteDataW),
    .ReadDataW(ReadDataW),
    .RdW(RdW_o),
    .PCPlus4W(PCPlus4W)
);

assign ZeroOp = ZeroE ^ funct3E[0]; // Complements Zero flag for BNE Instruction
assign PCSrcE = (BranchE & ZeroOp) | JumpE;
assign PCJalSrcE = (op == 7'b1100111) ? 1 : 0; // jalr

endmodule
