#include "lazy/utils.hpp"

std::string mergeAlternately(std::string word1, std::string word2)
{
    std::string ans = "";
    int i = 0, j = 0;
    while (i < word1.length() && j < word2.length())
    {
        ans.push_back(word1[i]);
        ans.push_back(word2[j]);
        ++i;
        ++j;
    }
    ans.append(word1.substr(i, word1.length() - 1));
    ans.append(word2.substr(j, word2.length() - 1));
    return ans;
}

int main(int argc, char const *argv[])
{
    out(mergeAlternately("abc", "pqr"));
    out(mergeAlternately("ab", "pqrs"));
    out(mergeAlternately("abcd", "pq"));
    return 0;
}