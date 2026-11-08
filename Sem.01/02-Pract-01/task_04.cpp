#include <iostream>

int main() {
    double firstSide = 0.0, secondSide = 0.0;

    std::cout << "Please enter the length of the first side: ";
    std::cin >> firstSide;
    std::cout << "Please enter the length of the second side: ";
    std::cin >> secondSide;

    std::cout << "Perimeter: " << 2 * (firstSide + secondSide) << '\n';
    std::cout << "Area: " << firstSide * secondSide << '\n';

    return 0;
}
