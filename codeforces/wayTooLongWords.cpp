#include <iostream>
#include <vector>
#include <string>

int main()
{
    int x{0};
    std::cin >> x;

    std::vector<std::string> w;
    for (int i = 0; i < x; i++)
    {
        std::string str;
        std::cin >> str;
        w.push_back(str);

        if (w[i].length() > 10)
        {
            w[i] = w[i][0] + std::to_string(w[i].length() - 2) + (w[i][w[i].length() - 1]);
        }
        else
        {
            w[i] = w[i];
        }
    }

    for (int i = 0; i < w.size(); i++)
    {
        std::cout << w[i] << std::endl;
    }
    return 0;
}