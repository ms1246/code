[bits 16]
global _start
extern _c_kernel

_start:
    cli

    xor ax, ax
    mov ds, ax
    mov es, ax
    mov ss, ax
    
    mov sp, 0x7C00      
    
    sti  ; start interrupts               

    call _c_kernel

hang:
    hlt
    jmp hang