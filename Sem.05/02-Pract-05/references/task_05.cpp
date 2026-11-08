#include <iostream>

int CountDigits(int number) {
    int digits = 0;

    do {
        ++digits;
        number /= 10;
    } while (number != 0);

    return digits;
}

int PowerOfTen(int exponent) {
    int result = 1;

    for (int i = 0; i < exponent; ++i) {
        result *= 10;
    }

    return result;
}

void MoveLastDigits(int& a, int& b, int k) {
    const int power = PowerOfTen(k);
    const int lastDigits = a % power;

    a /= power;
    b += lastDigits * PowerOfTen(CountDigits(b));
}

int main() {
    int a = 0, b = 0, k = 0;
    std::cin >> a >> b >> k;

    MoveLastDigits(a, b, k);

    std::cout << a << ' ' << b << '\n';

    return 0;
}
