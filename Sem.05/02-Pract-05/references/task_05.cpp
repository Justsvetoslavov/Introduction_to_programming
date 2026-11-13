#include <iostream>

int CountDigits(long long number) {
    int digits = 0;

    do {
        ++digits;
        number /= 10;
    } while (number != 0);

    return digits;
}

long long PowerOfTen(int exponent) {
    long long result = 1;

    for (int i = 0; i < exponent; ++i) {
        result *= 10;
    }

    return result;
}

// Moves the last k digits of a to the front of b.
// a and b are below 10^9, so the new b has at most 18 digits and fits in long long.
void MoveLastDigits(long long& a, long long& b, int k) {
    const long long power = PowerOfTen(k);
    const long long lastDigits = a % power;

    a /= power;
    b = lastDigits * PowerOfTen(CountDigits(b)) + b;
}

int main() {
    long long a = 0, b = 0;
    int k = 0;
    std::cin >> a >> b >> k;

    MoveLastDigits(a, b, k);

    std::cout << a << ' ' << b << '\n';
    return 0;
}
