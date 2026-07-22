org 0x7C00

%macro putc 1
    mov ah, 0x0E
    mov al, %1
    int 0x10
%endmacro

putc 117
putc 114
putc 109
putc 111
putc 109

loop:
    jmp loop


times 510-($-$$) db 0
dw 0xAA55