#include <iostream>

int main()
{
    int x{0};
    std::cin >> x;
    int y{x - 2};
    if (x > 2 && y % 2 == 0)
    {
        std::cout << "YES";
    }
    else
    {
        std::cout << "NO";
    }
    return 0;
}