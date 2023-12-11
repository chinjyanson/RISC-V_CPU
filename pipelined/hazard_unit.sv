module hazard_unit (
     input  logic    [4:0]   Rs1E_i,         
     input  logic    [4:0]   Rs2E_i,
     input  logic    [4:0]   Rs1D_i,
     input  logic    [4:0]   Rs2D_i,
     input  logic    [4:0]   RdM_i,
     input  logic    [4:0]   RdW_i,
     input  logic    [4:0]   RdE_i,
     input  logic    [2:0]   RegWriteW_i,
     input  logic    [6:0]   opcodeE_i,
     input  logic    [1:0]   PCSrcE_i,
     output logic    [1:0]   FowardAE_o,
     output logic    [1:0]   FowardBE_o,
     output logic            Den_o,
     output logic            Fen_o,
     output logic            PCen_o,
     output logic            PCrst_o,
     output logic            Frst_o,
     output logic            Drst_o
    
);

hazard_foward FowardHazard(
    .RdM        (RdM_i),
    .Rs1E       (Rs1E_i),
    .Rs2E       (Rs2E_i),
    .FowardAE   (FowardAE_o),
    .FowardBE   (FowardBE_o)
    
);

hazard_stall StallHazard(
    .RdE        (RdE_i),
    .Rs1D       (Rs1D_i),
    .Rs2D       (Rs2D_i),
    .opcodeE    (opcodeE_i),
    .Fen        (Fen_o),
    .Den        (Den_o),
    .PCen       (PCen_o)
);

hazard_control ControlHazard(
    .PCSrcE     (PCSrcE_i),
    .PCrst      (PCrst_o),
    .Frst       (Frst_o),
    .Drst       (Drst_o)
);

endmodule