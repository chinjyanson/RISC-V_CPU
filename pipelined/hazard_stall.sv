module hazard_stall(
    input logic [4:0]   Rs1D,
    input logic [4:0]   Rs2D,
    input logic [4:0]   RdE,
    input logic [6:0]   opcodeE,
    input  logic [2:0]   ImmSrcE,
    output logic        Fen,
    output logic        Den,
    output logic        PCen,
    output logic        Een
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
logic A;
logic B;
logic Flip; 

assign A = ((ImmSrcE!=3'b100)&&(ImmSrcE!=3'b011));
assign B = (A)&&(ImmSrcE!=3'b000);
assign PCen = Flip ? (((opcodeE == 7'd3) && ((RdE == Rs1D)&&A  || (RdE == Rs2D)&&B)) ? 0 : 1) : 1;
assign Fen  = Flip ? (((opcodeE == 7'd3) && ((RdE == Rs1D)&&A  || (RdE == Rs2D)&&B)) ? 0 : 1) : 1;
assign Den  = Flip ? (((opcodeE == 7'd3) && ((RdE == Rs1D)&&A  || (RdE == Rs2D)&&B))? 0 : 1)  : 1;
assign Een  = Flip ? (((opcodeE == 7'd3) && ((RdE == Rs1D)&&A  || (RdE == Rs2D)&&B))? 0 : 1)  : 1;



endmodule
