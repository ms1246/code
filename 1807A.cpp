#include <iostream>

int main(int argc, char const *argv[])
{
    int t;
    std::cin >> t;
    while(t--){
        int a, b, c;
        std::cin >> a >> b >> c;
        if (a+b == c) {
            std::cout << "+";
        } else {
            std::cout << "-";
        }
        std::cout << "\n";
    }
    return 0;
}
