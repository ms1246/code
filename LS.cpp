#include "lazy/utils.hpp"

int main(int argc, char const *argv[])
{
    std::vector<int> arr = {1,5,4,6,7,5,4};
    int ele = 4;
    
    int idx = -1;

    for (sst i = 0; i < arr.size(); i++)
    {
        if (arr[i] == ele) idx = i;
        
        if (idx != -1) break;
        
    }
    if (idx != -1)
    {
        std::cout << "Found at index: " << idx << "\n";
    } else{
        out("Cannot find the element");
    }
    
    
    return 0;
}