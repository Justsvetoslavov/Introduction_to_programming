#include <iostream>

int main() {
    long long cardNumber = 0; // 16 digits do not fit in int
    std::cin >> cardNumber;

    // Printing the digits one by one keeps leading zeros, e.g. 0042
    std::cout << "XXXXXXXXXXXX"
              << cardNumber / 1000 % 10
              << cardNumber / 100 % 10
              << cardNumber / 10 % 10
              << cardNumber % 10 << '\n';

    return 0;
}
