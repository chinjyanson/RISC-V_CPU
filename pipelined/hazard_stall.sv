module hazard_stall(
    input logic [4:0]    Rs1D,
    input logic [4:0]   Rs2D,
    input logic [4:0]   RdE,
    input logic [6:0]   opcodeE,
    output logic        Fen,
    output logic        Den,
    output logic        PCen
);


//stalling
    //detect that RdE = to RsD - and we had a load
        //we need a delayed opcode
        //disable F and D registers
        //disable the reg on PC???? 
        
// if((opcodeE == 7'd3) && ((RdE == Rs1D) || (RdE == Rs1D))) begin
//         Fen     = 0;
//         Den     = 0;
//         PCen    = 0;
// end 
// else begin
//         Fen     = 1;
//         Den     = 1;
//         PCen    = 1;
// end

assign Fen  = ((opcodeE == 7'd3) && (RdE == Rs1D)) ? 0 : 1;
assign Den  = ((opcodeE == 7'd3) && (RdE == Rs1D)) ? 0 : 1;
assign PCen = ((opcodeE == 7'd3) && (RdE == Rs1D)) ? 0 : 1;


endmodule
