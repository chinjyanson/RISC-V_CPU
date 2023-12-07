.text
.equ base_pdf, 0x100
.equ base_data, 0x10000
.equ max_count, 500
main:
    JAL     ra, init  # jump to init, ra and save position to ra
    JAL     ra, build
forever:
    JAL     ra, display
    JAL     forever

init:       # function to initialise PDF buffer memory 
    LI      a1, 0x100
_loop1:                         # repeat
    ADDI a1, zero, 255
    ADDI a0, zero, 0
    SB zero, base_pdf(a1)
    BEQ a0, a1, _loop1
    RET

build:      # function to build prob dist func (pdf)
    LI      a1, base_data       # a1 = base address of data array
    LI      a2, 0               # a2 = offset into of data array 
    LI      a3, base_pdf        # a3 = base address of pdf array
    LI      a4, max_count       # a4 = maximum count to terminate
_loop2:                         # repeat
    SLLI    a0, a0, 1 
    ADDI    a0, a0, 1
    LI      t0, 0xFF
    BNE     a0, t0, _loop2      # until bin count reaches max
    RET

display:    # function send PDF array value to a0 for display
    LI      a1, 0               # a1 = offset into pdf array
    LI      a2, 255             # a2 = max index of pdf array
_loop3:                         # repeat
    LBU     a0, base_pdf(a1)    #   a0 = mem[base_pdf+a1)
    ADDI    a1, a1, 1           #   incr 
    BNE     a1, a2, _loop3      # until end of pdf array
    RET
