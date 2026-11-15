#include <iostream>

int main() {
    int number = 0;
    std::cin >> number;

    bool isPowerOfTwo = number >= 1;

    while (isPowerOfTwo && number != 1) {
        isPowerOfTwo = number % 2 == 0;
        number /= 2;
    }

    std::cout << std::boolalpha << isPowerOfTwo << '\n';

    return 0;
}
