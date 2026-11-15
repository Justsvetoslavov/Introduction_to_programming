#include <iostream>

int main() {
    const double pi = 3.14159265;

    double radius = 0.0;
    std::cout << "Radius: ";
    std::cin >> radius;

    std::cout << "Circumference: " << 2 * pi * radius << '\n';
    std::cout << "Area: " << pi * radius * radius << '\n';

    return 0;
}
