#include "lazy/utils.hpp"

int binary_search(std::vector<int> &arr, int element)
{
    std::sort(arr.begin(), arr.end()); // sort the array if not already sorted
    int low = 0, high = arr.size() - 1;
    while (low <= high)
    {
        int mid = low + (low + high) / 2;
        if (arr[mid] > element)
        {
            high = mid - 1;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        if (arr[mid] == element)
        {
            return mid;
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    std::vector<int> arr = {1, 5, 4, 6, 7, 5, 4};
    int ele = 4;

    int idx = -1;

    // main thing
    std::sort(arr.begin(), arr.end());

    display_vec(arr);
    idx = binary_search(arr, ele);

    if (idx != -1)
    {
        std::cout << "Found at index: " << idx << "\n";
    }
    else
    {
        out("Cannot find the element");
    }
    return 0;
}