module stall_unit(
    logic input [4:0]   Rs1D;
    logic input [4:0]   Rs2D;
    logic input [4:0]   RdE;
    logic input [6:0]   opcodeE;
    logic output        Fen;
    logic output        Den;
    logic output        PCen;
);


//stalling
    //detect that RdE = to RsD - and we had a load
        //we need a delayed opcode
        //disable F and D registers
        //disable the reg on PC???? 
        
if(opcodeE == 7'd3) begin
    if ((RdE == Rs1D) || (RdE == Rs1D)) begin
        Fen     = 0;
        Den     = 0;
        PCen    = 0;
    end

end



endmodule