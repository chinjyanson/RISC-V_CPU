module sign_extend #(
    parameter DATA_WIDTH = 32,
    parameter IMM_WIDTH = 2
)(
    input   logic [DATA_WIDTH-1:0]        instr_i,
    input   logic [IMM_WIDTH-1:0]         ImmSrc_i,
    output  logic [DATA_WIDTH-1:0]        ImmOp_o
);

always_comb begin
    case (ImmSrc_i) //20                12              = 32 bits
    2'b00: ImmOp_o = {{20{instr_i[31]}}, instr_i[31:20]}; //I Type
                    //20                 7              5             = 32 bits
    2'b01: ImmOp_o = {{20{instr_i[31]}}, instr_i[31:25], instr_i[11:7]}; //S Type
                    //20                        1           6              4        1      = 32 bits          
    2'b10: ImmOp_o = {{DATA_WIDTH-12{instr_i[31]}}, instr_i[7], instr_i[30:25], instr_i[11:8], 1'b0}; //B Type
                    //12                        8           1           10          1       = 32 bits
    2'b11: ImmOp_o = {{DATA_WIDTH-20{instr_i[31]}}, instr_i[19:12], instr_i[20], instr_i[30:21], 1'b0};//J Type 
    endcase 
end
endmodule

module sign_extend #(
    parameter   DATA_WIDTH = 32,
                IMM_WIDTH = 12
)(
    input   logic [DATA_WIDTH-1:0]  instr_i,
    input   logic [IMM_WIDTH-1:0]   ImmSrc_i,    
    output  logic [DATA_WIDTH-1:0]  ImmOp_o
);

    always_comb 
    
        casez ({instr_i[6:0],instr_i[14:12],ImmSrc_i[11]})
            {7'b0010011, 3'b000, 1'b1}:     ImmOp_o = {20'b11111111111111111111, ImmSrc};
            {7'b1100011, 3'b???, 1'b?}:     ImmOp_o = {19'b1111111111111111111, ImmSrc, 1'b0};
            default:                        ImmOp_o = {20'b0, ImmSrc_i};
        endcase

endmodule
