#include <iostream>

bool isPrime(int x)
{
    if (x == 2)
    {
        return 1;
    }
    else if (x % 2 != 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{

    std::cout << "Insert a number: ";
    int x{0};
    std::cin >> x;

    std::cout << std::boolalpha;
    std::cout << "is " << x << " a prime? " << isPrime(x) << '\n';

    return 0;
}