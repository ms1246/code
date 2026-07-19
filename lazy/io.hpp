#ifndef IO_HPP
#define IO_HPP

#include <iostream>

/*
Dislpay a `vector<T>`
`end`: what to print after the each iteration, like a seperator
`supend`: what to print at the very end
*/
template <typename T>
void display_vec(std::vector<T> &arr, std::string end = " ", std::string supend = "\n")
{
    for (auto &&i : arr)
    {
        std::cout << i << end;
    }
    std::cout << supend;
};

/* Print new line */
void inline pnl()
{
    std::cout << "\n";
}

/* I am lazy so my simple out */
template <typename T>
inline void out(T thing, std::string end = "\n")
{
    std::cout << thing << end;
}


void _print_int_arr(int arr[], int len, std::string end = "\n")
{
    for (int i = 0; i < len; i++)
    {
        out(arr[i], end);
    }
}
#endif // IO_HPP
