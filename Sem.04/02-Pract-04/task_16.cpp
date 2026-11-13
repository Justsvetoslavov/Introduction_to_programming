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

int main() {
    int number = 0;
    std::cin >> number;

    std::cout << std::boolalpha << IsPrime(number) << '\n';

    return 0;
}
