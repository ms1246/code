#include <iostream>
#include "lazy/utils.hpp"


unsigned long djb2_hash(unsigned char* str){
    unsigned long hash = 5381;
    int c;

    while (c = *str++)
    {
        hash = ((hash << 5) + hash) + c;
    }
    
    return hash;
}

int main(int argc, char const *argv[])
{

    char* str = "Hello";
    djb2_hash((unsigned char*) str);
   
    return 0;
}