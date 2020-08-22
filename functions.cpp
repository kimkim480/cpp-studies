#include <iostream>

int userInput()
{
    std::cout << "Input a number: ";
    int x{0};
    std::cin >> x;
    return x;
}

int doubleNumber(int x)
{
    return x * 2;
}

int main()
{
    int x{userInput()};
    std::cout << "Double: " << doubleNumber(x) << '\n';
    return 0;
}