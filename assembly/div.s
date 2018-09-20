.section .data
list:
.long 12,5

.section .text
.globl _start
_start:
 # load dividend into EAX
 movl $0,%edi
 movl list(,%edi,4),%eax

 # load divisor into EBX
 movl $1,%edi
 movl list(,%edi,4),%ebx

 # clears EDX
 xor %edx,%edx

 # divide EAX/EBX
 divl %ebx

 # EAX: quotient
 # EDX: remainder

 # exit
 movl $0,%ebx
 movl $1,%eax
 int $0x80
 
