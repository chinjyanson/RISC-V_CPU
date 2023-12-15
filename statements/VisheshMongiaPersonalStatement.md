# Vishesh Mongia Personal Statement 

## Introduction
In this project I focussed on debugging our RISC-V CPU by creating testbenches to troubleshoot and visualise our outputs on the Vbuddy. My tasks led me to have an overarching understanding of this architecture and how we interact with a model of a cpu using c++ testbenches along with verilator. 
Ensuring functionality of each submodule and in turn our processor was a tedious task, but over time while getting experienced with various debugging techniques and GTKwave I found this coursework extremely rewarding and beneficial to my knowledge of computer architecture.


### Structure 
My personal statement is distributed with the following structure:
- [Single Cycle CPU](#single-cycle-processor)
- [Pipelined CPU](#pipelined-processor)
- [What I have learnt](#what-i-have-learned)

## Single Cycle Processor

### Summary of contributions:
- Created top cpu.sv file and connected submodules 
- Debugged and organised single cycle processor
- Created F1 lights program which is used in the final submission
- Created testbenches to debug and test modules
- Used Vbuddy to visualise F1 and PDF programs

We started this project by forking our initial lab 4 repo which saved time in the short term in order to fast track our progress. I soon found out that the teams initial SystemVerilog code was quite messy and convoluted due to our inexperience. This meant that my earlier debugs were more oriented towards making our code clearer by adding _i and _o to respective inputs and outputs and organising our wires between modules. This process got me into the correct frame of mind, understanding verilog errors and utilising GTKwave to find potential errors.

[Organising our top file](https://github.com/vishesh32/RISC-V-Team1/commit/68ab86416fa8fdee26f721dac506706ee60bb87a#diff-a5b41f44cfd3cb4f925de3fba8bf2366f03d587af431da1f2a968f6d1f142e7c) 
[Renaming inputs/outputs](https://github.com/vishesh32/RISC-V-Team1/commit/ff227ca86d1d32d87d62c8945060bac88d7e2456)
[Fixing overlooked errors](https://github.com/vishesh32/RISC-V-Team1/commit/669c8329cf2fb342263f5a69cf980751736d20af#diff-e48e3546c80833f34c5470360580103750305bdcf2e9193510eb8d7f2bbde4c0)


Once all the errors and warnings thrown by the compiler were sorted, this next stage of debugging really tested my understanding of how each submodule interacts with another. The types of problems now were rooted deep into the code, more often than not being a very small logical or wiring error. These initially were difficult to trace but going through the lectures and other resources aided me to understand what output we expected at each point of the datapath, allowing me to find the bug usually in places where the code seemed correct.

[Similar wire names caused our ALU to fail, the fix being a simple wire swap](https://github.com/vishesh32/RISC-V-Team1/commit/40fb9a01b181969fc3bcd5cecaf08c212c2f22c7)
[Zero register was editable causing the F1 program to fail](https://github.com/vishesh32/RISC-V-Team1/commit/7b76e8eabcef086eafbc0161d783de015912eaf0#diff-bb57bdecb9a66f37a77e7de626aa400f6dd06d72694f9f7a7869177c73050ccd)
[ALUResult_o wire was missing](https://github.com/vishesh32/RISC-V-Team1/commit/ee3688a3077f39d4556329badb9a380c97852d14)










## Pipelined Processor


## What I have learned
