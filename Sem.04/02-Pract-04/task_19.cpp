#include <iostream>

bool IsPrime(int number) {
    if (number < 2) {
        return false;
    }

    for (int divisor = 2; divisor * divisor <= number; ++divisor) {
        if (number % divisor == 0) {
            return false;
        }
    }

    return true;
}

bool IsSumOfTwoPrimes(int number) {
    for (int first = 2; first <= number / 2; ++first) {
        if (IsPrime(first) && IsPrime(number - first)) {
            return true;
        }
    }

    return false;
}

int main() {
    int number = 0;
    std::cin >> number;

    std::cout << std::boolalpha << IsSumOfTwoPrimes(number) << '\n';

    return 0;
}
