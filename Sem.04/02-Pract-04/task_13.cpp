#include <iostream>

void PrintBinary(unsigned number) {
    unsigned power = 1;

    while (power <= number / 2) {
        power *= 2;
    }

    while (power != 0) {
        std::cout << number / power % 2;
        power /= 2;
    }
}

int main() {
    unsigned number = 0;
    std::cin >> number;

    PrintBinary(number);
    std::cout << '\n';

    return 0;
}
