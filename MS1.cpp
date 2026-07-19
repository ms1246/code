/* Middle Shift */

#include <iostream>
#include <vector>
#include "lazy/utils.hpp"

int main(int argc, char const *argv[])
{
    std::vector<int> arr = {1, 2, 3, 4, 5, 0}; // Extra padding 
    int n = arr.size() - 1; // 5
    int pos = 3; // index = pos - 1 = 2
    int ele = 8;
    display_vec(arr);

    std::cout << "Shifting the element from the pos - 1" << std::endl;

    for (ssize_t i = n; i >= pos; i--)
    {
        arr[i] = arr[i-1];
    }

    arr[pos-1] = ele;
    

    display_vec(arr);
    return 0;
}