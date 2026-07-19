#include "lazy/utils.hpp"

void move_zeros(int *arr, int len){
    int left = 0;
    for (int right = 0; right < len; right++)
    {
        if (arr[right] != 0)
        {
            swap(arr[left], arr[right]);
            left++;
        }
        
    }
    
}

int main(int argc, char const *argv[])
{
    int arr[] = {1,0,0,2,5,0,1,0,10};
    _print_int_arr(arr, sizeof(arr)/sizeof(arr[1]), " ");
    move_zeros(arr, sizeof(arr)/sizeof(arr[1]));
    pnl();
    _print_int_arr(arr, sizeof(arr)/sizeof(arr[1]), " ");
    return 0;
}