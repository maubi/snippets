section     .text
    global  _start ; must be declared for linker
_start:             ; entry point
    mov edx,len
    mov ecx,msg
    mov ebx,1
    mov eax,4
    int 0x80

    mov eax,1
    int 0x80

section     .data
msg db 'Hello, World!', 0xa
len equ $ - msg