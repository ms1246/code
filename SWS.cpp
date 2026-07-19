#include <iostream>
#include <vector>
#include <math.h>
#include <limits.h>

template <typename T>
void display(std::vector<T> &arr, std::string end = "\n")
{
    for (auto &&i : arr)
    {
        std::cout << i << end;
    }
}

// Naive Approach
// int maxSum(std::vector<int> &arr, int k)
// {
//     /*
//         Get the max sum of the k elements from the arr
//     */
//     int sum = INT_MIN;
//     int n = arr.size();
//     for (size_t i = 0; i <= n - k; i++)
//     {
//         int currentSum = 0;
//         for (size_t j = 0; j < k; j++)
//         {
//             currentSum += arr[i + j];
//         }
//         sum = std::max(sum, currentSum);
//     }

//     return sum;

// }

// Sliding Window Approach
int maxSum(std::vector<int> &arr, int k)
{
    /*
        Get the max sum of the k elements from the arr
    */
    int n = arr.size();

    if (k > n)
    {
        return -1;
    }

    int max_sum = 0;
    int window_sum = 0;
    // finding the first window
    for (size_t i = 0; i < k; i++)
    {
        window_sum += arr[i];
    }
    max_sum = window_sum;

    for (size_t i = k; i < n; i++)
    {
        std::cout << i-k << std::endl;
        window_sum += arr[i] - arr[i - k];
        max_sum = std::max(max_sum, window_sum);
    }

    return max_sum;
}

int main(int argc, char const *argv[])
{
    std::vector<int> arr = {5, 2, -1, 0, 3, 4, 5};
    int k = 3;
    std::cout << "STATIC SLIDING WINDOW\n";
    display(arr, " ");
    std::cout << "\n"
              << maxSum(arr, k) << "\n";
    return 0;
}