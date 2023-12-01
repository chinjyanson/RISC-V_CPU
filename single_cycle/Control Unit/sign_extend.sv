module sign_extend #(
    parameter DATA_WIDTH = 32,
    parameter IMM_WIDTH = 2
)(
    input   logic [DATA_WIDTH-1:0]        instr_i,
    input   logic [IMM_WIDTH-1:0]         ImmSrc_i,
    output  logic [DATA_WIDTH-1:0]        ImmOp_o
);

always_comb begin
    case (ImmSrc_i)
    2'b01: ImmOp_o = {{DATA_WIDTH-12{instr_i[31]}}, instr_i[31:20]}; //I instruction
                    //20                        1           6              4        1      = 32 bits          
    2'b11: ImmOp_o = {{DATA_WIDTH-12{instr_i[31]}}, instr_i[7], instr_i[30:25], instr_i[11:8], 1'b0}; //B instructions
                    //12                        8           1           10          1       = 32 bits
    2'b10: ImmOp_o = {{DATA_WIDTH-20{instr_i[31]}}, instr_i[19:12], instr_i[20], instr_i[30:21], 1'b0};//J instructions 
    default ImmOp_o = 32'b0;
    
    endcase 
end
endmodule
