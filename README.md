# RISC V (Team 1) 

This repository is part of an IAC Module for Imperial where we are required to design a single cycle processor, and then further designing a pipelined processor (with data memory cache and hazard unit).





## High Level Description

- Design a single cycle processor that executes couple of RISC V instructions
- Instruction is fetched from Program Counter and Instruction Memory
- Instruction is decoded and is manipulated to determine what operation to perform 
- The ALU and Register file receives the operands from the instructions
- ALU executes instructions and result is stored back to the specified register file 
- Program Counter increments and next instruction is loaded

## Team Members and Distribution of Tasks

| Team members         | Task assigned                                                         |
|----------------------|-----------------------------------------------------------------------|
| Chin Jun Yen (Anson) | Writing README.md file, ALU and register files                        |
| Bruno Duaso          | Writing logic for control unit, sign extension and instruction memory |
| Vishesh Mongia       | Testbench and verification of design                                  |
| Samuel Khoo Ing Shin | PC and related addresses                                              |


## Single Cycle Processor

![Image](/img/pro.png)

## Installation

1. Clone the repository: `git clone https://github.com/vishesh32/RISC-V-Team1`
2. Navigate to the project directory: `cd RISC-V-Team1`
3. Install dependencies: `npm install` or `pip install -r requirements.txt` or any other relevant command.

## F1 Program 


### Explanation of F1 Program 

This is a basic program that counts the neopixel lights up by shifting left, then adding 1 


## Using run.sh 

Explain how to use your project or provide examples.

```bash
$ source ./cpu_doit.sh
```

## Directory Format 



'''


'''