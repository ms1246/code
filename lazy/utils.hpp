#ifndef UTILS_HPP
#define UTILS_HPP
#include "com_inc.hpp"
#include "io.hpp"
#include "types.hpp"
/**
 * @brief Swap two values.
 * @tparam T Value type.
 * @param a First value reference.
 * @param b Second value reference.
 */
template <typename T>
void swap(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
};

/**
 * @brief Convert a boolean to "Yes" or "No".
 * @param thing Boolean input.
 * @return "Yes" when true, otherwise "No".
 */
std::string yesno(bool thing){
    return thing ? "Yes" : "No";
}

#endif