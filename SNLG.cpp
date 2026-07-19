#include "lazy/utils.hpp"

int main(int argc, char const *argv[])
{
    std::vector<int> arr = {12, 35, 1, 10, 34, 1};
    int largest = -1;
    int secondLargest = -1;

    for (sst i = 0; i < arr.size(); i++)
    {
        if (arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        }

        else if (arr[i] > secondLargest && arr[i] < largest)
        {
            secondLargest = arr[i];
        }
        
    }

    out(secondLargest);
    
    return 0;
}