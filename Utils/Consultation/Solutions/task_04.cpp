// Ограничения на входа:
//   n >= 1 и n <= 100000

#include <iostream>

int CountDigits(int n) {
    int count = 0;

    while (n != 0) {
        ++count;
        n /= 10;
    }

    return count;
}

int Power(int base, int exponent) {
    int result = 1;

    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }

    return result;
}

bool IsArmstrong(int n) {
    int digitsCount = CountDigits(n);
    int sum = 0;
    int remaining = n;

    while (remaining != 0) {
        sum += Power(remaining % 10, digitsCount);
        remaining /= 10;
    }

    return sum == n;
}

int main() {
    int n = 0;
    std::cin >> n;

    std::cout << (IsArmstrong(n) ? "Armstrong number" : "Not Armstrong number") << '\n';

    return 0;
}
