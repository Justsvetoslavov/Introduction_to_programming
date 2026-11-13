#include <iostream>

int main() {
    // long long, because the sum of two sides up to 10^9 does not fit in int.
    long long a = 0, b = 0, c = 0;
    std::cin >> a >> b >> c;

    // Integer sides keep the comparisons exact. With double, 0.1 + 0.2 > 0.3 is true because of rounding.
    const bool arePositive = a > 0 && b > 0 && c > 0;
    const bool satisfyInequality = a + b > c && a + c > b && b + c > a;

    std::cout << (arePositive && satisfyInequality ? "Valid triangle\n" : "Invalid triangle\n");

    return 0;
}
