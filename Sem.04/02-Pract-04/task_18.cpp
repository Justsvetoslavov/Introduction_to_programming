#include <iostream>

void PrintFactorization(int number) {
    bool isFirst = true;

    // Smaller factors are divided out first, so every divisor found is prime
    for (int divisor = 2; number > 1; ++divisor) {
        while (number % divisor == 0) {
            std::cout << (isFirst ? "" : ".") << divisor;
            isFirst = false;
            number /= divisor;
        }
    }
}

int main() {
    int number = 0;
    std::cin >> number;

    PrintFactorization(number);
    std::cout << '\n';

    return 0;
}
