.section .data
.section .bss
.section .rodata

.section .text
.globl _start

_start:
 # struct definition
 .equ PERSON_SIZE, 44
 .equ PERSON_FIRST_NAME_OFFSET, 0
 .equ PERSON_LAST_NAME_OFFSET, 20
 .equ PERSON_AGE_OFFSET, 40

 # base pointer offset for the local struct
 .equ PERSON_VAR, 0 - PERSON_SIZE

 # init main function
 pushl %ebp
 movl %esp,%ebp

 # reserve space for local struct
 subl $PERSON_SIZE,%esp

 # set age in local struct
 movl $40,PERSON_VAR + PERSON_AGE_OFFSET(%ebp)

 # set return value
 movl PERSON_VAR + PERSON_AGE_OFFSET(%ebp),%ebx

 # restore EBP and ESP
 popl %ebp
 movl %ebp,%esp
 
 # exit
 movl $1,%eax
 int $0x80




