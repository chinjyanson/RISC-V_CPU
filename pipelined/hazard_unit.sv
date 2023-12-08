module hazard_unit #(
    parameter   ADDRESS_WIDTH = 8,
    parameter   DATA_WIDTH = 32,
    parameter   CONTROL_WIDTH = 3,
    parameter   IMM_WIDTH = 2
)(
    logic input [4:0]   Rs1E,
    logic input [4:0]   Rs2E,
    logic input [4:0]   RdM, 
    logic input [4:0]   RdW,
    logic input [2:0]   RegWriteW,
    logic output[1:0]   FowardAE,
    logic output[1:0]   FowardBE,
    
    //logic shown in the slides, we will need more 
);

data_hazard DataHazard(

);

control_hazard ControlHazard(

);

endmodule