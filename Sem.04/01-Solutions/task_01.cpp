#include <iostream>

unsigned long long Reverse(unsigned int n) {
    unsigned long long result = 0;
    short lastDigit = 0;

    while (n != 0) {
        lastDigit = n % 10;
        // Equivalent to: result = result * 10 + n % 10;
        (result *= 10) += lastDigit;
        n /= 10;
    }

    return result;
}

int main() {
    unsigned int n = 0;
    std::cin >> n;

    std::cout << Reverse(n) << std::endl;

    return 0;
}
