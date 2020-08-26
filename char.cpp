#include <iostream>

int main()
{
    char ch{'a'};
    std::cout << '\b';
    std::cout << ch << '\n';
    std::cout << static_cast<int>(ch) << '\n';

    return 0;
}