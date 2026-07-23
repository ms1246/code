#include "lazy/utils.hpp"

int main(int argc, char const *argv[])
{
    std::vector<lzvr> list{1, 2, 3, 'a', 'v', 3.14159, true, true, false, 54, 67};
    for (auto &&i : list)
    {
        out(i, " ");
    }

    lzvr x = 42;
    out(x);
    lzvr y = {42};
    out(y);
    lzvr z{42};
    out(z);
    
    return 0;
}