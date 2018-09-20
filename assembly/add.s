.section .data

.section .text
 .globl _start

_start:
 movl $10, %eax
 movl $20, %ebx

 addl %eax, %ebx

 movl $1, %eax
 int $0x80
