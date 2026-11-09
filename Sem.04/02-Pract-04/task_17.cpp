#include <iostream>

bool IsPrime(int number) {
    if (number < 2) {
        return false;
    }

    for (int divisor = 2; divisor <= number / divisor; ++divisor) {
        if (number % divisor == 0) {
            return false;
        }
    }

    return true;
}

void PrintPrimesUpTo(int limit) {
    for (int number = 2; number <= limit; ++number) {
        if (IsPrime(number)) {
            std::cout << number << ' ';
        }
    }
}

int main() {
    int limit = 0;
    std::cin >> limit;

    PrintPrimesUpTo(limit);
    std::cout << '\n';

    return 0;
}
