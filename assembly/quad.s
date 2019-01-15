.section .rodata
bignum:
 .quad 0xFFFF0000

.section .text
.globl _start

_start:
 # load bignum into RCX for inspection
 movq bignum,%rcx

 # exit
 movl $0,%ebx
 movl $1,%eax
 int $0x80
