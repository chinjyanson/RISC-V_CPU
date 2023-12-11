module reg_dec #(
    parameter DATA_WIDTH = 32
)(
    input logic                    clk,
    input logic                    en,
    input logic                    rst,

    input logic [2:0]              RegWriteD,
    input logic [1:0]              ResultSrcD,
    input logic [1:0]              MemWriteD,
    input logic                    JumpD,
    input logic                    BranchD,
    input logic [2:0]              ALUControlD,
    input logic                    ALUsrcD,
    input logic [DATA_WIDTH-1:0]    RD1D,
    input logic [DATA_WIDTH-1:0]    RD2D,
    input logic [DATA_WIDTH-1:0]    PCD,
    input logic [4:0]               Rs1D,
    input logic [4:0]               Rs2D,
    input logic [4:0]               RdD,
    input logic [DATA_WIDTH-1:0]    ExtImmD,
    input logic [DATA_WIDTH-1:0]    PCPlus4D,
    input logic [6:0]               opcodeD,

    output logic [2:0]              RegWriteE,
    output logic [1:0]              ResultSrcE,
    output logic [1:0]              MemWriteE,
    output logic                    JumpE,
    output logic                    BranchE,
    output logic [2:0]              ALUControlE,
    output logic                    ALUsrcE,
    output logic [DATA_WIDTH-1:0]    RD1E,
    output logic [DATA_WIDTH-1:0]    RD2E,
    output logic [DATA_WIDTH-1:0]    PCE,
    output logic [4:0]               Rs1E,
    output logic [4:0]               Rs2E,
    output logic [4:0]               RdE,
    output logic [DATA_WIDTH-1:0]    ExtImmE,
    output logic [DATA_WIDTH-1:0]    PCPlus4E,
    output logic [6:0]               opcodeE

);

always_ff @(posedge clk)begin
    if(en) begin     
        RegWriteE   <=       rst?   0   :   RegWriteD;
        ResultSrcE  <=       rst?   0   :   ResultSrcD;
        MemWriteE   <=       rst?   0   :   MemWriteD;
        JumpE       <=       rst?   0   :   JumpD;
        BranchE     <=       rst?   0   :   BranchD;
        ALUControlE <=       rst?   0   :   ALUControlD;
        ALUsrcE     <=       rst?   0   :   ALUsrcD;
        RD1E        <=       rst?   0   :   RD1D;
        RD2E        <=       rst?   0   :   RD2D;
        PCE         <=       rst?   0   :   PCD;
        Rs1E        <=       rst?   0   :   Rs1D;
        Rs2E        <=       rst?   0   :   Rs2D;
        RdE         <=       rst?   0   :   RdD;
        ExtImmE     <=       rst?   0   :   ExtImmD;
        PCPlus4E    <=       rst?   0   :   PCPlus4D;
        opcodeE     <=       rst?   0   :   opcodeD;
    end
end

endmodule


