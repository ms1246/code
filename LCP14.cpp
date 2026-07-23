#include "lazy/utils.hpp"
#include <math.h>

std::string longestCommonPrefix(std::vector<std::string> &strs)
{
    std::string ans("");
    auto small = std::min_element(strs.begin(), strs.end(), [](const std::string &s1, const std::string &s2)
                                  { return s1.length() < s2.length(); });

    return ans;
}

int main(int argc, char const *argv[])
{
    std::vector<std::string> v{"flower", "flow", "flight"};
    out(longestCommonPrefix(v));
    return 0;
}