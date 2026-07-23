#include "lazy/utils.hpp"

int main(int argc, char const *argv[])
{
    std::vector<int> v;
    v.reserve(100);
    out(v.size());
    out(v.capacity());
    v[42] = 50;
    
    return 0;
}