module reg_execute_control #(
    parameter DATA_WIDTH =32
)(  
    input logic                    clk,     
    input logic [2:0]              RegWriteE,
    input logic [1:0]              ResultSrcE,
    input logic [1:0]              MemWriteE,
    
    output logic [2:0]              RegWriteM,
    output logic [1:0]              ResultSrcM,
    output logic [1:0]              MemWriteM
);

    always_ff @(posedge clk) begin
        RegWriteM   <=      RegWriteE;
        ResultSrcM  <=      ResultSrcE;
        MemWriteM   <=      MemWriteE;
          
    end
      

endmodule
