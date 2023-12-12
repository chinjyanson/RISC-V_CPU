module control_top #(
        parameter   ADDRESS_WIDTH = 8,
        parameter   DATA_WIDTH = 32
)(
    input  logic                           clk,
    input  logic                           Fen_i,
    input  logic                           Frst_i,
    input  logic                           Den_i,
    input  logic                           Drst_i,
    input  logic [DATA_WIDTH-1:0]          PCF_i, //8b ==> edited to 32 bits
    input  logic [DATA_WIDTH-1:0]          PCPlus4F_i, 
    input  logic                           ZeroE_i,
    output logic [DATA_WIDTH-1:0]          InstrD_o,//32b
    output logic [2:0]                     RegWriteW_o, //1b ==> edited to 3 bits
    output logic [1:0]                     MemWriteM_o, //1b ==> edited to 2 bits
    output logic [IMM_WIDTH-1:0]           ResultsrcW_o, //3b ==> edited to 2 bits
    output logic [CONTROL_WIDTH-1:0]       ALUcontrolE_o, //3b
    output logic                           ALUsrcE_o, //1 bit
    output logic [DATA_WIDTH-1:0]          ImmOpD_o,//32 bits
    output logic [DATA_WIDTH-1:0]          PCD_o,
    output logic [DATA_WIDTH-1:0]          PCPlus4D_o,

);

    logic [2:0]       ImmSrc;
    logic [31:0]      InstrF;
    logic              ZeroOp;

    //Execute Logic
    wire [2:0]              RegWriteE;
    wire [1:0]              ResultSrcE;
    wire [1:0]              MemWriteE;
    wire [DATA_WIDTH-1:0]   ALUResultE; 
    wire                    JumpE;
    wire                    BranchE;
    wire [2:0]              funct3E;

    //Memory Logic
    wire [2:0]              RegWriteM;
    wire [1:0]              ResultSrcM;



    instr_mem InstrMem(
        .addr_i         (PCF_i),
        .Instr_o        (InstrF)
    );
    
    control_unit #(DATA_WIDTH) ControlUnit(
    .opcode         (InstrD[6:0]),
    .funct3         (InstrD[14:12]),
    .funct7         (InstrD[30]),
    .RegWriteD      (RegWriteD),
    .MemWriteD      (MemWriteD),
    .ResultsrcD     (ResultsrcD),
    .ALUctrlD       (ALUctrlD),
    .ALUsrcD        (ALUsrcD),
    .ImmSrcD        (ImmSrcD),
    .JumpD          (JumpD),
    .BranchD        (BranchD)
    );

    reg_fetch #(DATA_WIDTH) FReg(
        .clk        (clk),
        .en         (Fen_i),
        .rst        (Frst_i),
        .InstrF     (InstrF),
        .PCPlus4F   (PCPlus4F_i),
        .PCF        (PCF_i),
        .PCPlus4D   (PCPlus4D_o),
        .PCD        (PCD_o),
        .InstrD     (InstrD)
    );

    
    sign_extend #(DATA_WIDTH) MySignExtend(
        .instr        (InstrD),
        .ImmSrc       (ImmSrc),
        .ExtImm       (ImmOpD_o)
    );

    reg_dec_control DREg(
    //inputs - D
    .clk(clk),
    .en(Den_i),
    .rst(Drst_i),
    .RegWriteD(RegWriteD_i),
    .ResultSrcD(ResultSrcD_i),
    .MemWriteD(MemWriteD_i),
    .JumpD(JumpD_i),
    .BranchD(BranchD_i),
    .ALUControlD(ALUControlD_i),
    .ALUsrcD(ALUsrcD_i),
    .funct3D(funct3D_i),

    //outputs - E
    .RegWriteE(RegWriteE),
    .ResultSrcE(ResultSrcE),
    .MemWriteE(MemWriteE),
    .JumpE(JumpE),
    .BranchE(BranchE),
    .ALUControlE(ALUControlE_o),
    .ALUsrcE(ALUsrcE_o),
    .funct3E(funct3E)
);

reg_execute_control EREG(
    .clk(clk),
    //inputs E
    .RegWriteE(RegWriteE),
    .ResultSrcE(ResultSrcE),
    .MemWriteE(MemWriteE),

    //outputs M
    .RegWriteM(RegWriteM),    
    .ResultSrcM(ResultSrcM),
    .MemWriteM(MemWriteM_o),
);

reg_memory_control MREG(
    //input M
    .clk(clk),
    .RegWriteM(RegWriteM),    
    .ResultSrcM(ResultSrcM),

    //outputs W
    .RegWriteW(RegWriteW_o), 
    .ResultSrcW(ResultSrcW_o),
);

logic ZerOP;

assign ZeroOp = ZeroE_i ^ InstrD[12]; 
if (JumpE){
    PCSrcE = 2'b10;
}else {
    PCSrcE = (BranchE & ZeroOp) ? 2'b01 : 2b'00;
}




endmodule

