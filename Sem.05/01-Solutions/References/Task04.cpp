#include <iostream>

// Функция за НОД
int gcd(int a, int b) {
    while (b != 0) {
        const int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

// Функция за съкращаване
void simplify(int& numerator, int& denominator) {
    const int g = gcd(numerator, denominator);
    numerator /= g;
    denominator /= g;
}

int main() {
    int n1 = 0, d1 = 0, n2 = 0, d2 = 0;
    std::cout << "Въведете две дроби (числител/знаменател): ";
    std::cin >> n1 >> d1 >> n2 >> d2;

    // съкращаваме двете дроби
    simplify(n1, d1);
    simplify(n2, d2);

    // събираме дробите
    int numerator = n1 * d2 + n2 * d1;
    int denominator = d1 * d2;

    // съкращаваме резултата
    simplify(numerator, denominator);

    std::cout << numerator << "/" << denominator << std::endl;
    return 0;
}
