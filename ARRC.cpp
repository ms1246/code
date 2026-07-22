#include "lazy/utils.hpp"

void foox(int* arr){
    int *p = arr;
    while (*p++){
        out(*p);
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3};
    // _print_int_arr(arr, sizeof(arr)/sizeof(arr[1]));
    foox(arr);
    return 0;

}