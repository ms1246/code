/* BEGIN SHIFT */

#include <iostream>

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5, 6, 0};
    int ele = 67; // add ele in the beginning of the arr
    int n = 6;
    std::cout << n << std::endl;
    for (size_t i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\nSHIFTING THE ELEMENTS TO THE RIGHT\n";
    // Shifting the elements
    for (ssize_t i = n - 1; i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[0] = ele;

    for (size_t i = 0; i <= n; i++)
    {
        std::cout << arr[i] << " ";
    }
    return 0;
}