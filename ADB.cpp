// Array delete the start element

#include "lazy/utils.hpp"


int main(int argc, char const *argv[])
{
    std::vector<int> arr = {1,2,3,4,5};
    display_vec(arr);

    // shifting to left

    for (ssize_t i = 1; i < arr.size(); i++)
    {
        arr[i-1] = arr[i];
    }

    arr.pop_back();

    display_vec(arr);
    
    return 0;
}