// Ограничения на входа:
//   a >= 2, a <= b и b <= 100000

#include <iostream>

bool IsPrime(int number) {
    if (number <= 1) {
        return false;
    }

    if (number == 2) {
        return true;
    }

    if (number % 2 == 0) {
        return false;
    }

    for (int divisor = 3; divisor <= number / divisor; divisor += 2) {
        if (number % divisor == 0) {
            return false;
        }
    }

    return true;
}

void PrintPrimes(int a, int b) {
    bool isFirst = true;

    for (int number = a; number <= b; ++number) {
        if (IsPrime(number)) {
            if (!isFirst) {
                std::cout << ' ';
            }

            std::cout << number;
            isFirst = false;
        }
    }

    if (isFirst) {
        std::cout << "No prime numbers found.";
    }

    std::cout << '\n';
}

int main() {
    int a = 0;
    int b = 0;
    std::cin >> a >> b;

    PrintPrimes(a, b);

    return 0;
}
