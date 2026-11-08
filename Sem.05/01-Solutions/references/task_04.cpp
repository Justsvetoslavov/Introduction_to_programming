#include <iostream>

// Euclid's algorithm for the greatest common divisor
int Gcd(int a, int b) {
    while (b != 0) {
        const int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

// Reduces the fraction to lowest terms
void Simplify(int& numerator, int& denominator) {
    const int g = Gcd(numerator, denominator);
    numerator /= g;
    denominator /= g;
}

int main() {
    int n1 = 0, d1 = 0, n2 = 0, d2 = 0;
    std::cout << "Enter two fractions (numerator denominator): ";
    std::cin >> n1 >> d1 >> n2 >> d2;

    // Reduce both fractions
    Simplify(n1, d1);
    Simplify(n2, d2);

    // Add the fractions
    int numerator = n1 * d2 + n2 * d1;
    int denominator = d1 * d2;

    // Reduce the result
    Simplify(numerator, denominator);

    std::cout << numerator << "/" << denominator << std::endl;
    return 0;
}
