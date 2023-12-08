module reg_dec#(
    parameter DATA_WIDTH = 32;
)(
    input logic                    clk,
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
    input logic [DATA_WIDTH-1:0]    PCPlus4D,

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
    output logic [DATA_WIDTH-1:0]    PCPlus4E,

);

always_ff @(posedge clk)begin
    RegWriteE   <=       RegWriteD;
    ResultSrcE  <=       ResultSrcD;
    MemWriteE   <=       MemWriteD;
    JumpE       <=       JumpD;
    BranchE     <=       BranchD;
    ALUControlE <=       ALUControlD;
    ALUsrcE     <=       ALUsrcD;
    RD1E        <=       RD1D;
    RD2E        <=       RD2D;
    PCE         <=       PCD;
    Rs1E        <=       Rs1D;
    Rs2E        <=       Rs2D;
    RdE         <=       RdD;
    PCPlus4E    <=       PCPlus4D;
end

endmodule


