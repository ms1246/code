:: # Assemble the boot stub
nasm -f win32 boot.s -o boot.o

:: # Compile the C code
gcc -m32 -c -ffreestanding -O2 kernel.c -o kernel.o

:: # Link them into a single binary image
ld -m i386pe --file-alignment=512 -T linker.ld -nostdlib boot.o kernel.o -o boot.elf
objcopy -O binary boot.elf boot.bin
