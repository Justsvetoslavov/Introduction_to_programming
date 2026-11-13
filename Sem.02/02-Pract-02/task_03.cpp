#include <iostream>

int main() {
    double a = 0.0, b = 0.0;
    std::cin >> a >> b;

    std::cout << (a > b ? a : b) << '\n';

    return 0;
}
