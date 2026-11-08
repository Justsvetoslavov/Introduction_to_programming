#include <iostream>

int main() {
    double a = 0.0, b = 0.0, c = 0.0;
    std::cin >> a >> b >> c;

    const bool arePositive = a > 0 && b > 0 && c > 0;
    const bool satisfyInequality = a + b > c && a + c > b && b + c > a;

    std::cout << (arePositive && satisfyInequality ? "Valid triangle\n" : "Invalid triangle\n");

    return 0;
}
