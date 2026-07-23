#include "lazy/utils.hpp"

/*

    n is positive
    res * res ~<= n

*/
int sqrt_lc(int n)
{
    int low = 0, high = n;
    while (low < high)
    {
        int mid = low + (high - low) / 2;
        out(mid);
        if (mid == n / mid)
            return mid;
        if (mid < n / mid)
            low = mid + 1;
        if (mid > n / mid)
            high = mid - 1;
    }
}

int main(int argc, char const *argv[])
{
    // out(sqrt_lc(4));
    out(sqrt_lc(8));
    // out(sqrt_lc(16));
    // out(sqrt_lc(36));
    return 0;
}