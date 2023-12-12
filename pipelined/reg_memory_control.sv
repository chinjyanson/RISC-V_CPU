module reg_memory #(
    parameter DATA_WIDTH =32
)(  
    input logic                    clk,     
    input logic [2:0]              RegWriteM,
    input logic [1:0]              ResultSrcM,

    output logic [2:0]              RegWriteW,
    output logic [1:0]              ResultSrcW,
    );

    always_ff @(posedge clk) begin
        RegWriteW   <=      RegWriteM;
        ResultSrcW  <=      ResultSrcM;
    end

endmodule