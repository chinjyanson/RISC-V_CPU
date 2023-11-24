module PCreg #(
    parameter PC_WIDTH = 32
)(
    input logic clk,
    input logic rst,
    input logic [PC_WIDTH-1:0] next_PC ,
    output logic [PC_WIDTH-1:0] PC 
);

always_ff @(posedge clk) begin
    if(rst)begin 
        PC <= 32'b0;
    end
    else begin
        PC <= next_PC;   
    end
end
    
endmodule
