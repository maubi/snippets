# TODO: currently 0(terminator) is compared to the max value!

.section .data

data_items:
 .long 3,67,34,222,45,75,54,34,44,33,22,11,66,0

.section .text
 .globl _start
_start:
 movl $0, %edi							# move 0 into the index register
 movl data_items(,%edi,4), %eax			# load the first byte of data
 movl %eax, %ebx						# since this is the first item, %eax is the biggest

 start_loop:							# main loop
  cmpl $0, %eax							# chech if we've reached the end of the list
  je loop_exit
  incl %edi								# load next value
  movl data_items(,%edi,4), %eax
  cmpl %ebx, %eax						# compare current(%eax) to max(%ebx)
  jle start_loop						# jump to loop beginning if current < max
  movl %eax, %ebx						# set current(%eax) as the new max(%ebx)
  jmp start_loop						# jump to loop beginning

 loop_exit:
  movl $1, %eax							# exit() syscall. returns max(already loaded into %ebx)
  int $0x80								# exec the syscall
