#ifndef UTILS_HPP
#define UTILS_HPP
#include "com_inc.hpp"
#include "io.hpp"
#include "bool_utils.hpp"
#include "types.hpp"
/**
 * @brief Swap two values.
 * @tparam T Value type.
 * @param a First value reference.
 * @param b Second value reference.
 */
template <typename T>
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
};

#endif