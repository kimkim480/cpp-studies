#include <iostream> // Library for input and output

int main() {
    int x{ };
    //cout stands for "Character output"
    std::cout << "Enter a number: ";
    //cin stands for "Character input"
    std::cin >> x;
    std::cout << "You entered " << x << '\n';
    return 0;
}