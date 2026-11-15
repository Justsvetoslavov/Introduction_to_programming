#include <iostream>

int main() {
    int dividend = 0, divisor = 0;

    std::cout << "Dividend: ";
    std::cin >> dividend;
    std::cout << "Divisor: ";
    std::cin >> divisor;

    std::cout << "The quotient of the division is : " << dividend / divisor << '\n';
    std::cout << "The remainder of the division is : " << dividend % divisor << '\n';

    return 0;
}
