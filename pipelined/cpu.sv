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
    logic   [DATA_WIDTH-1:0] Instr;
    logic   [DATA_WIDTH-1:0] PCD;
    logic   [DATA_WIDTH-1:0] PCPlus4D;
    logic                    JumpD;
    logic                    BranchD;


    //output internal logic for alu module 
    logic [CONTROL_WIDTH-1:0]  ALUctrl;
    logic ALUsrc;
    logic Zero;
    logic [DATA_WIDTH-1:0]     ALUResult_o;


    //output internal logic for pc module
    logic [IMM_WIDTH-1:0]       Resultsrc;
    logic [DATA_WIDTH-1:0]      ImmOp;
    logic [IMM_WIDTH-1:0]       PCsrc;
    logic [DATA_WIDTH-1:0]      PCF;
    logic [DATA_WIDTH-1:0]      PCPlus4F;
    logic [DATA_WIDTH-1:0]      Result;


pc_top pc(
    .clk(clk),        
    .rst(rst),        
    .ALUResult_i(ALUResult_o),    //result from data mem to mux4    
    .ImmOp_i(ImmOp),     
    .PCsrc_i(PCsrc),
    .PCF_o(PCF), //32b
    .PCPlus4F_o(PCPlus4F) //unsure
    );

control_top control(
    .clk(clk),
    .PCF_i(PCF), //32b
    .PCPlus4F_i(PCPlus4F)
    .InstrD_o(Instr),//32b
    .RegWriteD_o(RegWrite), //1b
    .MemWriteD_o(MemWrite), //1b
    .ResultsrcD_o(Resultsrc), //3b ==> edited to 2 bits
    .ALUctrlD_o(ALUctrl), //3b
    .ALUsrcD_o(ALUsrc), //1 bit
    .ImmOpD_o(ImmOp), //32 bits
    .PCD_o(PCD),
    .PCPlus4D_o(PCPlus4D),
    .JumpD_o(JumpD),
    .BranchD_o(BranchD)
);

alu_top alu(
    .clk(clk),
    .ALUsrcD_i(ALUsrc),
    .ALUctrlD_i(ALUctrl),
    .InstrD_i(Instr),
    .RegWriteD_i(RegWrite),
    .ResultSrcD_i(Resultsrc),
    .MemWriteD_i(MemWrite),
    .ImmOpD_i(ImmOp),
    .PCPlus4D_i(PCPlus4),
    .a0(a0),  //(debug output)
    .ALUResult_o(ALUResult_o),
    .PCD_i(PCD),
    .PCPlus4D_i(PCPlus4D)
);  

hazard_unit hazard(

);
endmodule

