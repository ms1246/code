#ifndef UTILS_HPP
#define UTILS_HPP
#include "com_inc.hpp"
#include "io.hpp"
#include "types.hpp"
template <typename T>
void swap(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
};

#endif