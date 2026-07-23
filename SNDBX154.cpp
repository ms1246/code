#include "lazy/utils.hpp"

int main(int argc, char const *argv[])
{
    // std::vector<lzvr> list{1, 2, 3, 'a', 'v', 3.14159, true, true, false, 54, 67, "Hello World"};
    // display_vec(list);

    lzvr x = "Hello World This is ok";
    lzvr y = x;
    x = "Changed";
    lzvr z(y);
    y = "y is changed";
    out(x);
    out(y);
    out(z);

    return 0;
}