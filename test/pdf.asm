
pdf.out.reloc:     file format elf32-littleriscv


Disassembly of section .text:

bfc00000 <main> (File Offset: 0x1000):
main():
bfc00000:	014000ef          	jal	ra,bfc00014 <init> (File Offset: 0x1014)
bfc00004:	024000ef          	jal	ra,bfc00028 <build> (File Offset: 0x1028)

bfc00008 <forever> (File Offset: 0x1008):
forever():
bfc00008:	fff00513          	addi	a0,zero,-1
bfc0000c:	050000ef          	jal	ra,bfc0005c <display> (File Offset: 0x105c)
bfc00010:	ff9ff06f          	jal	zero,bfc00008 <forever> (File Offset: 0x1008)

bfc00014 <init> (File Offset: 0x1014):
init():
bfc00014:	10000593          	addi	a1,zero,256

bfc00018 <_loop1> (File Offset: 0x1018):
_loop1():
bfc00018:	fff58593          	addi	a1,a1,-1
bfc0001c:	10058023          	sb	zero,256(a1)
bfc00020:	fe059ce3          	bne	a1,zero,bfc00018 <_loop1> (File Offset: 0x1018)
bfc00024:	00008067          	jalr	zero,0(ra)

bfc00028 <build> (File Offset: 0x1028):
build():
bfc00028:	000105b7          	lui	a1,0x10
bfc0002c:	00000613          	addi	a2,zero,0
bfc00030:	10000693          	addi	a3,zero,256
bfc00034:	0c800713          	addi	a4,zero,200

bfc00038 <_loop2> (File Offset: 0x1038):
_loop2():
bfc00038:	00c587b3          	add	a5,a1,a2
bfc0003c:	0007c283          	lbu	t0,0(a5)
bfc00040:	00d28833          	add	a6,t0,a3
bfc00044:	00084303          	lbu	t1,0(a6)
bfc00048:	00130313          	addi	t1,t1,1
bfc0004c:	00680023          	sb	t1,0(a6)
bfc00050:	00160613          	addi	a2,a2,1
bfc00054:	fee312e3          	bne	t1,a4,bfc00038 <_loop2> (File Offset: 0x1038)
bfc00058:	00008067          	jalr	zero,0(ra)

bfc0005c <display> (File Offset: 0x105c):
display():
bfc0005c:	00000593          	addi	a1,zero,0
bfc00060:	0ff00613          	addi	a2,zero,255

bfc00064 <_loop3> (File Offset: 0x1064):
_loop3():
bfc00064:	1005c503          	lbu	a0,256(a1) # 10100 <base_data+0x100> (File Offset: 0xffffffff40411100)
bfc00068:	00158593          	addi	a1,a1,1
bfc0006c:	fec59ce3          	bne	a1,a2,bfc00064 <_loop3> (File Offset: 0x1064)
bfc00070:	00008067          	jalr	zero,0(ra)

Disassembly of section .riscv.attributes:

00000000 <.riscv.attributes> (File Offset: 0x1074):
   0:	1e41                	.2byte	0x1e41
   2:	0000                	.2byte	0x0
   4:	7200                	.2byte	0x7200
   6:	7369                	.2byte	0x7369
   8:	01007663          	bgeu	zero,a6,14 <max_count-0xb4> (File Offset: 0x1088)
   c:	0014                	.2byte	0x14
   e:	0000                	.2byte	0x0
  10:	7205                	.2byte	0x7205
  12:	3376                	.2byte	0x3376
  14:	6932                	.2byte	0x6932
  16:	7032                	.2byte	0x7032
  18:	5f30                	.2byte	0x5f30
  1a:	326d                	.2byte	0x326d
  1c:	3070                	.2byte	0x3070
	...
