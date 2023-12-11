module cpu #(
    parameter   ADDRESS_WIDTH = 8,
    parameter   DATA_WIDTH = 32,
    parameter   CONTROL_WIDTH = 3,
    parameter   IMM_WIDTH = 2

)(

    input logic                        clk,
    input logic                        rst,
    output logic [DATA_WIDTH-1:0]      a0

);

    //output internal logic for control module 
    logic   [2:0]            RegWrite;
    logic   [1:0]            MemWrite;
    logic   [DATA_WIDTH-1:0] InstrD;
    logic   [DATA_WIDTH-1:0] PCD;
    logic   [DATA_WIDTH-1:0] PCPlus4D;
    logic                    JumpD;
    logic                    BranchD;


    //output internal logic for alu module 
    logic [CONTROL_WIDTH-1:0]  ALUctrl;
    logic                      ALUsrc;
    logic [DATA_WIDTH-1:0]     ALUResult_o;
    logic [DATA_WIDTH-1:0]     PCTarget;
    logic [1:0]                PCSrcE;
    logic [4:0]                Rs1E; 
    logic [4:0]                Rs2E;
    logic [4:0]                RdM;
    logic [4:0]                RdW;
    logic [4:0]                RdE;
    logic [2:0]                RegWriteW;

    //output internal logic for pc module
    logic [IMM_WIDTH-1:0]       Resultsrc;
    logic [DATA_WIDTH-1:0]      ImmOp;
    logic [DATA_WIDTH-1:0]      PCF;
    logic [DATA_WIDTH-1:0]      PCPlus4F;
    logic [DATA_WIDTH-1:0]      Result;


    //output internal logic for hazard module
    logic                       Den;
    logic                       Fen;
    logic                       PCen;
    logic                       FowardAE;
    logic                       FowardBE;
    logic                       Den;
    logic                       Fen;
    logic                       PCen;
    logic                       PCrst;
    logic                       Frst;
    logic                       Drst;

pc_top pc(
    .clk(clk),
    .PCen_i(PCen),  
    .PCrst_i(rst),        
    .ALUResult_i(ALUResult_o),    //result from data mem to mux4    
    .PCsrc_i(PCsrcE),
    .PCF_o(PCF), //32b
    .PCPlus4F_o(PCPlus4F), //unsure
    .PCTarget_i(PCTarget)
    );

control_top control(
    .clk(clk),
    .Fen_i(Fen), 
    .PCF_i(PCF), //32b
    .PCPlus4F_i(PCPlus4F),
    .InstrD_o(InstrD),//32b
    .RegWriteD_o(RegWrite), //1b
    .MemWriteD_o(MemWrite), //1b
    .ResultsrcD_o(Resultsrc), //3b ==> edited to 2 bits
    .ALUctrlD_o(ALUctrl), //3b
    .ALUsrcD_o(ALUsrc), //1 bit
    .ImmOpD_o(ImmOp), //32 bits
    .PCD_o(PCD),
    .PCPlus4D_o(PCPlus4D),
    .JumpD_o(JumpD),
    .BranchD_o(BranchD),
    .Fen_i(Fen),
    .Frst_i(Frst)
);


alu_top alu(
    .clk(clk),
    .Den_i(Den),
    .ALUsrcD_i(ALUsrc),
    .ALUcontrolD_i(ALUctrl),
    .RegWriteD_i(RegWrite),
    .ResultSrcD_i(Resultsrc),
    .MemWriteD_i(MemWrite),
    .ExtImmD_i(ImmOp),
    .PCPlus4D_i(PCPlus4),
    .opcodeD_i(InstrD[6:0]),
    .a0(a0),  //(debug output)
    .ALUResult_o(ALUResult_o),
    .PCD_i(PCD),
    .PCPlus4D_i(PCPlus4D),
    .Rs1D_i(InstrD[19:15]),
    .Rs2D_i(InstrD[24:20]),
    .RdD_i(InstrD[11:7]),
    .JumpD_i(JumpD),
    .BranchD_i(BranchD),
    .PCTargetE_o(PCTarget),
    .PCSrcE_o(PCSrcE),
    .opcodeE_o(OpcodeE),

    .Rs1E_o(Rs1E),   
    .Rs2E_o(Rs2E),
    .RdM_o(RdM),
    .RdW_o(RdW),
    .RdE_o(RdE),
    .RegWriteW_o(RegWriteW),
    .FowardAE_i(FowardAE),
    .FowardBE_i(FowardBE),
    .Den_i(Den),
    .Drst_i(Drst)

);  

hazard_unit hazard(
    .Rs1E_i(Rs1E),
    .Rs2E_i(Rs2E),
    .Rs1D_i(InstrD[19:15]),
    .Rs2D_i(InstrD[24:20]),
    .RdM_i(RdM),
    .RdW_i(RdW),
    .RdE_i(RdE),
    .RegWriteW_i(RegWriteW),
    .opcodeE_i(OpcodeE),
    .PCSrcE_i(PCSrcE),
    .FowardAE_o(FowardAE),
    .FowardBE_o(FowardBE),
    .Den_o(Den),
    .Fen_o(Fen),
    .PCen_o(PCen),
    .PCrst_o(PCrst),
    .Frst_o(Frst),
    .Drst_o(Drst)
);

endmodule

