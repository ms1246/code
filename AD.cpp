#include <iostream>

void PrintArray(int *arr, int len)
{
    std::cout << len << "\n";
    for (size_t idx = 0; idx < len; ++idx) // Bruh
    {
        std::cout << arr[idx] << "\n";
    }
    std::cout << "\n";
}

int main(int argc, char const *argv[])
{
    int arr[] = {156, 141, 35, 94, 88, 61, 111};
    int len = sizeof(arr) / sizeof(arr[0]);
    PrintArray(arr, len);
    return 0;
}