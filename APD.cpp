// Array delete at a position

#include "lazy/utils.hpp"

int main(int argc, char const *argv[])
{
    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8}; // size = 8
    // Expected: {1, 2, 3, 4, 6, 7, 8} // size = 7
    int pos = 5; // index = pos - 1 = 4

    display_vec(arr);

    for (ssize_t i = pos-1; i < arr.size()-1; i++)
    {
        arr[i] = arr[i+1];
    }
    arr.pop_back(); // Remove the last element
    
    display_vec(arr);

    return 0;
}