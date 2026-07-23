#include "lazy/utils.hpp"

int main(int argc, char const *argv[])
{
    // std::vector<lzvr> list{1, 2, 3, 'a', 'v', 3.14159, true, true, false, 54, 67, "Hello World"};
    // display_vec(list);

    lzvr x = "Hello World This is ok";
    lzvr y = x;
    lzvr z(y);
    out(x);
    out(y);
    out(z);

    out(x.value.i);
    out(y.value.i);
    out(z.value.i);

    return 0;
}