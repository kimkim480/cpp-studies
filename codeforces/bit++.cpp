#include <iostream>
#include <string>

int main()
{
    int x;
    int c = 0;
    std::cin >> x;
    for (int i = 0; i < x; i++)
    {
        std::string str;
        std::cin >> str;

        if (str[0] == '+' || str[2] == '+')
        {
            c++;
        }
        else
        {
            c--;
        }
    }
    std::cout << c;
    return 0;
}