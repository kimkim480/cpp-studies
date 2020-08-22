#include <iostream>

int main() {
    std::cout << "Enter a integer number: ";

    int x{ 0 };
    std::cin >> x;
    
    std::cout << "Double " << x << " is " << x * 2 << '\n';
    std::cout << "Triple " << x << " is " << x * 3 << '\n';

    return 0;

}