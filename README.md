# RISC V (Team 1) 

This repository is part of an IAC Module for Imperial where we are required to design a single cycle processor, and then further designing a pipelined processor (with data memory cache and hazard unit).

### Note to examiner
Our folder was structured slightly differently since we didn't use any branching
- We have 3 folders 
    - `reduced_risc_v` refers to our Lab 4 processor design
    - `single_cycle` refers to our single cycle design
    - `test` refers to all the different single cycle design tests that we run
    - `pipelined` refers to the pipelined version of our processor 
    - `img` refers to all our images and videos used throughout our .md files 


## Joint Statement
As team we have ....

## High Level Description

- Design a single cycle processor that executes couple of RISC V instructions
- Instruction is fetched from Program Counter and Instruction Memory
- Instruction is decoded and is manipulated to determine what operation to perform 
- The ALU and Register file receives the operands from the instructions
- ALU executes instructions and result is stored back to the specified register file 
- Program Counter increments and next instruction is loaded

## Team Members and Distribution of Tasks

| Team members         | Primary Task assigned                                                 | Personal Statements                                                       | Emails         |
|----------------------|-----------------------------------------------------------------------|---------------------------------------------------------------------------|----------------|
| Chin Jun Yen (Anson) | Writing README.md file, ALU and register files                        |[Anson's Personal Statement](/AnsonChinPersonalStatement.md)               |ayc122@ic.ac.uk |
| Bruno Duaso          | Writing logic for control unit, sign extension and instruction memory |[Bruno's Personal Statement](/BrunoDuasoPersonalStatement.md)              |                |
| Vishesh Mongia       | Testbench and verification of design                                  |[Vishesh's Personal Statement](/VisheshMongiaPersonalStatement.md)         |                |
| Samuel Khoo Ing Shin | PC and related addresses                                              |[Samuel's Personal Statement](/SamuelKhooPersonalStatement.md)             |ssk122@ic.ac.uk |

Linked [here](/taskdistribution.md) is a more detailed version of the dsitribution of tasks within our group

## Single Cycle Processor

![Image](/img/pro.png)

### Explanation of F1 Program 

This is a basic program that counts the neopixel lights up by shifting left, then adding 1 


## Using run.sh 

```bash
$ source ./cpu_doit.sh
```


## Evidence and Results of Program

### Running Gaussian.mem 
![Gaussianimg](/img/gaussianmem.jpg)
![Gaussianvid](/img/gaussianmem.mp4)

### Running Noisy.mem
![Noisy](noisymem.jpg)

### Running Triange.mem
![Triange](triangemem.jpg)

### Running Sine.mem 
![Sine](sinemem.jpg)

### Running F1 Program
![F1video](f1video.mp4)

> Further images and videos can be found in the `img` folder 










