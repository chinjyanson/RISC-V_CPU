module control_top #(
    parameter   ADDRESS_WIDTH = 8,
    parameter   DATA_WIDTH = 32,
    parameter   CONTROL_WIDTH = 3, //why do we need these parameters?
    parameter   IMM_WIDTH = 2      //^^

)(
     input  logic [DATA_WIDTH-1:0]          PCF_i, //8b ==> edited to 32 bits
     input  logic [DATA_WIDTH-1:0]          PCPlus4F_i, 
     input  logic                           Zero_i, //1b
     output logic [DATA_WIDTH-1:0]          instr_o,//32b
     output logic [2:0]                     RegWrite_o, //1b ==> edited to 3 bits
     output logic [1:0]                     MemWrite_o, //1b ==> edited to 2 bits
     output logic [IMM_WIDTH-1:0]           Resultsrc_o, //3b ==> edited to 2 bits
     output logic [CONTROL_WIDTH-1:0]       ALUctrl_o, //3b
     output logic                           ALUsrc_o, //1 bit
     output logic [IMM_WIDTH-1:0]           PCsrc_o, //1 bit ==> edited to 2 bits
     output logic [DATA_WIDTH-1:0]          ImmOp_o,//32 bits
     output logic [DATA_WIDTH-1:0]          PCD_o,
     output logic [DATA_WIDTH-1:0]          PCPlus4D_o

);

    logic [1:0]       ImmSrc;

control_unit ControlUnit(
    .Zero_i          (Zero_i),
    .instr_i         (instr_o),
    .RegWrite_o      (RegWrite_o),
    .MemWrite_o       (MemWrite_o),
    .Resultsrc_o      (Resultsrc_o),
    .ALUctrl_o        (ALUctrl_o),
    .ALUsrc_o         (ALUsrc_o),
    .ImmSrc_o         (ImmSrc),
    .PCsrc_o          (PCsrc_o)

);

instr_mem InstrMem(
    .addr_i         (PCF_i),
    .Instr_o        (instr_o)
);

fetch_reg FReg(
    .InstrD(istr_o),
    .PCPlus4F(PCPlus4F_i),
    .PCF(PCF_i),
    .PCPlus4D(PCPlus4D_o),
    .PCD(PCD_o)
);

sign_extend MySignExtend(
    .instr_i        (instr_o),
    .ImmSrc_i       (ImmSrc),
    .ImmOp_o        (ImmOp_o)
);


endmodule 
