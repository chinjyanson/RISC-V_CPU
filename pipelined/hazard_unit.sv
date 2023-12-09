module hazard_unit #(
    parameter   ADDRESS_WIDTH = 8,
    parameter   DATA_WIDTH = 32,
    parameter   CONTROL_WIDTH = 3,
    parameter   IMM_WIDTH = 2
)(
    /*
    logic input [6:0]   opcode,
    logic input [2:0]   funct3,
    logic input         funct7,  
    */
    logic input [4:0]   Rs1E_i,
    logic input [4:0]   Rs2E_i,
    logic input [4:0]   RdM_i, 
    logic input [4:0]   RdW_i,
    logic input [2:0]   RegWriteW_i,
    logic output[1:0]   FowardAE_o,
    logic output[1:0]   FowardBE_o
    
    //logic shown in the slides, we will need more 
);

data_hazard DataHazard(
    .RdM(RdM_i),
    .Rs1E(Rs1E_i),
    .Rs2E(Rs2E_i),
    .FowardAE(FowardAE_o),
    .FowardBE(FowardBE_o)
);

control_hazard ControlHazard(

);

endmodule