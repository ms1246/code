// Delete First Occurrence of Given Element from an Array

#include "lazy/utils.hpp"
int main(int argc, char const *argv[])
{
    std::vector<int> arr = {1, 3, 2, 4, 5, 6, 4, 8, 9, 2};
    int ele = 2;

    display_vec(arr);

    bool found = false;

    for (ssize_t i = 0; i < arr.size(); i++)
    {
        if (found)
        {
            arr[i-1] = arr[i];
        }

        if (arr[i] == ele)
        {
            found = true;
        }
    }

    // for (ssize_t i = arr.size()-1; i > 0; --i)
    // {
    //     if (found)
    //     {
    //         arr[i] = arr[i-1];
    //     }

    //     if (arr[i] == ele)
    //     {
    //         found = true;
    //     }
    // }
    arr.pop_back();
    // arr.erase(arr.begin());
    display_vec(arr);

    return 0;
}