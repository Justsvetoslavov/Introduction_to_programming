#include <iostream>

// Euclid's algorithm for the greatest common divisor. Works with the absolute values,
// because % with negative operands would give a negative remainder.
long long Gcd(long long a, long long b) {
    if (a < 0) {
        a = -a;
    }
    if (b < 0) {
        b = -b;
    }

    while (b != 0) {
        const long long t = b;
        b = a % b;
        a = t;
    }
    return a;
}

// Reduces the fraction to lowest terms. The sign stays on the numerator and the denominator stays positive.
void Simplify(long long& numerator, long long& denominator) {
    if (denominator < 0) {
        numerator = -numerator;
        denominator = -denominator;
    }

    const long long g = Gcd(numerator, denominator);
    numerator /= g;
    denominator /= g;
}

int main() {
    long long n1 = 0, d1 = 0, n2 = 0, d2 = 0;
    std::cout << "Enter two fractions (numerator denominator): ";
    std::cin >> n1 >> d1 >> n2 >> d2;

    if (d1 == 0 || d2 == 0) {
        std::cout << "Invalid fraction\n";
        return 1;
    }

    Simplify(n1, d1);
    Simplify(n2, d2);

    // Every input is at most 10^9 in absolute value, so each product is at most 10^18
    // and the sum at most 2 * 10^18, which fits in long long.
    long long numerator = n1 * d2 + n2 * d1;
    long long denominator = d1 * d2;
    Simplify(numerator, denominator);

    std::cout << numerator << "/" << denominator << '\n';
    return 0;
}
