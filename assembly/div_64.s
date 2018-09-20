.section .data

.section .text
.globl _start

_start:

 movq $12,%rax
 movq $5,%rbx

 # clears RDX
 xor %rdx,%rdx

 # divide RAX/RBX
 divq %rbx

 # RAX: quotient
 # RDX: remainder

 # exit
 movl $0,%ebx
 movl $1,%eax
 int $0x80
 
