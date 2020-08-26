#include <iostream>
#include <vector>

int main()
{
    int n, k;
    std::vector<int> v;
    std::cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int j;
        std::cin >> j;
        v.push_back(j);
    }

    int c = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if ((v[i] >= v[k - 1]) && v[i] > 0)
        {
            c++;
        }
    }

    std::cout << c;

    return 0;
}