# Bruno Duaso Personal Statement

## Single Cycle Processor

### Introduction
For this first section of the project, I was mainly involved in the Control Section, with special focus on the Control Unit instructions and the Sign Extender. I additionally was significantly involved in debugging and helped with some miscellaneous tasks.
In this section of the project, progress was slower than anticipated due to a series of unexpected challenges. The need for extensive debugging of various errors significantly impeded our ability to advance at the desired pace.

### Control Unit 
Most of the implementations in this module required a very complete knowledge of 
the CPU behaviour. To implement most of the instructions I was required to modify 
modules from PC and ALU. Samuel (SamuelKhoo2003) helped with the completion 
of this module. Basic instructions (BNE, ADDI) where already implemented in the Lab 4 - A Reduced 
RISC-V CPU. In total, I implemented:
- Control Unit admits additional instructions:
    - [New instructions added to Control Unit](https://github.com/chinjyanson/Reduced_RISC-V-Team1/commit/834a18358ae1cdf8cfb0cc98112358d2e530cdae)
-  Jump and link instructions JAL / JALR: These instructions required 
modifications in ALU and PC in order to write the PC value into the 
register, and write it back to PC:
    - [ADDED JAL, JALR, +2 cntrl out](https://github.com/chinjyanson/Reduced_RISC-V-Team1/commit/f00e40925f5c2686d410f8778971ad76006569e1)
    - [Added MUX4 for Memory](https://github.com/chinjyanson/Reduced_RISC-V-Team1/commit/2a8dd21c2977ef0172c853b4370f74465fd29e6c)
    - [resultMux takes PCPlus4](https://github.com/chinjyanson/Reduced_RISC-V-Team1/commit/ae0b251e55ad688e03a4163cf2f253ded6abd965)
    - [Added MUX4 for PC](https://github.com/chinjyanson/Reduced_RISC-V-Team1/commit/d2e969b386d929fbc350fc50698d395cf4109e84)
    - [Connected PCPlus4 & ALUResult](https://github.com/chinjyanson/Reduced_RISC-V-Team1/commit/caa5ceaf9cf0ee306d6b7fc1b26452550e29f91f)






## Pipelining



