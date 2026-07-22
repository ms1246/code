#include "lazy/utils.hpp"

bool canPlaceFlowers(std::vector<int> &flowerbed, int n)
{
    if (n == 0)
    {
        return true;
    }
    
    for (int i = 0; i < flowerbed.size(); i++)
    {
        if (flowerbed[i] == 0)
        {
            bool left = (i == 0 || flowerbed[i - 1] == 0);
            bool right = (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0);
            if (left && right)
            {
                flowerbed[i] = 1;
                n--;

                if (n == 0)
                {
                    return true;
                }

                i++;
                
            }
            
        }
    }


    return false;
}

int main(int argc, char const *argv[])
{

    std::vector v{1, 0, 0, 0, 1};
    out(yesno(canPlaceFlowers(v, 1)));
    out(yesno(canPlaceFlowers(v, 2)));
    return 0;
}