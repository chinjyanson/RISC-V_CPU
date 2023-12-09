module reg_execute #(
    parameter DATA_WIDTH =32;
)(  
    input logic                    clk,     
    input logic [2:0]              RegWriteE,
    input logic [1:0]              ResultSrcE,
    input logic [1:0]              MemWriteE
    input logic [4:0]              RdE,
    input logic [DATA_WIDTH-1:0]   WriteDataE,
    input logic [DATA_WIDTH-1:0]   PCPlus4E,
    
    output logic [2:0]              RegWriteM,
    output logic [1:0]              ResultSrcM,
    output logic [1:0]              MemWriteM,
    output logic [4:0]              RdM,
    output logic [DATA_WIDTH-1:0]   WriteDataM,
    output logic [DATA_WIDTH-1:0]   PCPlusM,

    always_ff @(posedge clk) begin
        RegWriteM   <=      RegWriteE;
        ResultSrcM  <=      ResultSrE;
        MemWriteM   <=      MemWriteE;
        RdM         <=      RdE;
        WriteDataM  <=      WriteDataE;
        PCPlusM     <=      PCPlusME;   
          
    end
      
);
endmodule