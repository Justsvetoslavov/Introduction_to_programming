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

void SplitNumber(int number, int& first, int& second) {
    // Integer division leaves the extra digit in the first part
    const int power = PowerOfTen(CountDigits(number) / 2);

    first = number / power;
    second = number % power;
}

int main() {
    int number = 0, first = 0, second = 0;
    std::cin >> number;

    SplitNumber(number, first, second);

    std::cout << first << ' ' << second << '\n';

    return 0;
}
