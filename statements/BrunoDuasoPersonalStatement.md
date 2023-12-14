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

![Figure 1](/img/pro.png)

-  Load instructions (LB, LH, LW, LBU, LHU): these new instructions 
required additional control bits, to differentiate the ways in which we 
can write back the register file. WE3 was converted to 3 bits in order to solve this problem.
    - [LW, LH, LB instructions](https://github.com/chinjyanson/Reduced_RISC-V-Team1/commit/d9299d782632e35403d4cb4d405620e68370cdff)
    - [Sign Extension for LB/LH](https://github.com/chinjyanson/Reduced_RISC-V-Team1/commit/26790233c4c6e1883cf98b9fe9b7fbb13d2068b7)
    - [LBU and LHU instructions - 3'WE3](https://github.com/chinjyanson/Reduced_RISC-V-Team1/commit/aaf010785579db06aff0df9faa1af513572a3f84)
- Store instructions (SB, SH, SW): similarly, we need to differentiate 
between the types of stores into the DataMemory. MemWrite was 
converted to 2 bits in order to solve this problem.
    - [SB/SH/SW in Control Unit](https://github.com/chinjyanson/Reduced_RISC-V-Team1/commit/66006e98c32fdff92796b562c4da508c88b55ed0)
    - [Implement byte/half WE data mem](https://github.com/chinjyanson/Reduced_RISC-V-Team1/commit/5a435b5dee0bca728deb4ccc6681a21f37b07e95)
    - [Updated all instructions with Mem/RegWrt](https://github.com/chinjyanson/Reduced_RISC-V-Team1/commit/c4428907503a7c99c9b2d555d98924eae0937573)
    - [Updated Mem/RegWrite on top](https://github.com/chinjyanson/Reduced_RISC-V-Team1/commit/788dbab63870f1117b7aa3d1153d149a254ea664)

### Sign Extend

This module did not require a large number of changes from the version in the Lab 4 - A Reduced RISC-V CPU, and implementations were made in collaboration with 
Samuel. Initially the controls did not match the ones provided in the lectures, which 
caused confusion in the control outputs – this was later modified to have a standard 
model.

- [Modified ImmSrc - J type instructions](https://github.com/chinjyanson/Reduced_RISC-V-Team1/commit/f5728f330b3652f633b39f4365c50a24844ecae2)
- [Modified ImmSrc to fit the lectures](https://github.com/chinjyanson/Reduced_RISC-V-Team1/commit/7f46328cc357b9bbfcc757af1cc59ddde4c74ed7)
- [Added S type to Sign Extend](https://github.com/chinjyanson/Reduced_RISC-V-Team1/commit/1c30e8bf9af03965e23148496c3bd882366de31a)

### Debugging

I additionally helped Vishesh (vishesh32) testing, debugging, and fixing various 
issues. A significant portion of these errors were caused by the fact that we had 2 
separate folders – for development and for testing – and very often these folders
were not updated correctly between each other. This was later corrected in the 
Pipelined Section

- [Debug 0](https://github.com/chinjyanson/Reduced_RISC-V-Team1/commit/8ffeba6d598be992f948ba5090ea9334d4913b1a) - Fixed lengths of Mem/RegWrite
- [Debug 1](https://github.com/chinjyanson/Reduced_RISC-V-Team1/commit/3a869c5654f869a8f14c76366e7d36491447bb94) - Updated test folder with correct versions 
- [Debug 2](https://github.com/chinjyanson/Reduced_RISC-V-Team1/commit/e715716693e33b93499ac543f2cfe6661ce90980) - Solved various minor issues 
- [Debug 3](https://github.com/chinjyanson/Reduced_RISC-V-Team1/commit/b2340bfb9887e843876ee28b1dd1a01024783582) - Fixed lengths of PC wires
- [Debug 4](https://github.com/chinjyanson/Reduced_RISC-V-Team1/commit/80f14e17dd5b1aff3a132fce4b430e3f41113b66) - Fixed errors in Sign Extend
- [Debug 5](https://github.com/chinjyanson/Reduced_RISC-V-Team1/commit/3b338939df220d7765b8d59b01f6e053c6bd171b) - Fixed lengths of PC wires
- [Debug 6](https://github.com/chinjyanson/Reduced_RISC-V-Team1/commit/8c52a1892f3e2972dcda567db35c0f98d9d8f0f1) - Fixed various minor errors 

### Miscellaneous Contributions

- Created Figure 1: having an image reference of the new module 
configuration for the JAL/JALR instructions helped to implement the 
changes and avoid errors in the wiring.
- Coded F1 light sequence code, which was later modified by Vishesh.
- Coded Python Script to separate word instructions into bytes, in the 
correct order to be fetched into the InstrMem. I also modified InstrMem 
to fit Little Endian Addressing
    - [Python Script - Words to bytes](https://github.com/chinjyanson/Reduced_RISC-V-Team1/commit/26790233c4c6e1883cf98b9fe9b7fbb13d2068b7)

## Pipelining



