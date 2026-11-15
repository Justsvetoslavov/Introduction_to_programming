#include <iostream>

int main() {
    double a = 0.0, b = 0.0;
    std::cin >> a >> b;

    // std::boolalpha prints bool values as true/false instead of 1/0
    std::cout << std::boolalpha << (a < b) << '\n';

    return 0;
}
