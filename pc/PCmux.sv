module PCmux#(
    parameter next_PC_width = 12
)(
    input logic PCsrc,
    input logic [next_PC_width-1:0] branch_PC,
    input logic [next_PC_width-1:0] inc_PC,
    output logic [next_PC_width-1:0] next_PC 

);

assign next_PC = PCsrc ? branch_PC : inc_PC;
    
endmodule
