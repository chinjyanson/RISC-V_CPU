module sign_extend #(
    parameter DATA_WIDTH = 32,
    parameter IMM_WIDTH = 2
)(
    input   logic [DATA_WIDTH-1:0]        instr,
    input   logic [IMM_WIDTH-1:0]         ImmSrc,
    output  logic [DATA_WIDTH-1:0]        ExtImm
);

always_comb begin
    case (ImmSrc) //20                12              = 32 bits
    2'b00: ExtImm = {{20{instr[31]}}, instr[31:20]}; //I Type
                    //20                 7              5             = 32 bits
    2'b01: ExtImm = {{20{instr[31]}}, instr[31:25], instr[11:7]}; //S Type (sw)
                    //20                        1           6              4        1      = 32 bits          
    2'b10: ExtImm = {{20{instr[31]}}, instr[7], instr[30:25], instr[11:8], 1'b0}; //B Type (beq)
                    //12                        8           1           10          1       = 32 bits
    2'b11: ExtImm = {{12{instr[31]}}, instr[19:12], instr[20], instr[30:21], 1'b0}; //J Type (jal)

    default: ExtImm = 32'bx; //undefined
    endcase 
end
endmodule

