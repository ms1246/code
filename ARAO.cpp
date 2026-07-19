#include "lazy/utils.hpp"

int main(int argc, char const *argv[])
{
    std::vector<int> arr = {1, 2, 3, 4, 5, 1, 7, 8, 5};
    int ele = 1;
    int k = 0;
    display_vec(arr);

    for (sst i = 0; i < arr.size(); i++)
    {
        if (arr[i] != ele){
            int temp = arr[k];
            arr[k] = arr[i];
            arr[i] = temp;
            k++;
        }
    }

    display_vec(arr);
    out(k);
    
    return 0;
}