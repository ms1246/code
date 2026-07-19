void print_char(char c){
    __asm__ __volatile("int $0x10" : : "a"((0x0E << 8) | c));
}

void print_str(char* str){
    while(*str){
        print_char(*str++);
    }
}

void c_kernel(void){
    // do your thingies
    print_str("urmom");
}