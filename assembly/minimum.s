.section .data

data_items:
 .long 10,5,2,30,9,4,0

.section .text
 .globl _start
_start:
 movl $0, %edi							# move 0 into the index register
 movl data_items(,%edi,4), %eax			# load the first byte of data
 cmpl $0, %eax							# chech if we've reached the end of the list
 je loop_exit
 movl %eax, %ebx						# since this is the first item, %eax is the smallest

 start_loop:							# main loop
  incl %edi								# load next value
  movl data_items(,%edi,4), %eax
  cmpl $0, %eax							# chech if we've reached the end of the list
  je loop_exit
  cmpl %ebx, %eax						# compare current(%eax) to max(%ebx)
  jge start_loop						# jump to loop beginning if current > min
  movl %eax, %ebx						# set current(%eax) as the new min(%ebx)
  jmp start_loop						# jump to loop beginning

 loop_exit:
  movl $1, %eax							# exit() syscall. returns max(already loaded into %ebx)
  int $0x80								# exec the syscall
