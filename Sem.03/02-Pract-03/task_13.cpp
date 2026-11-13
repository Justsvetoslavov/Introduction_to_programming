#include <iostream>

int main() {
    int number = 0;
    std::cin >> number;

    if (number <= 0) {
        std::cout << "Invalid input\n";
        return 1;
    }

    int power = 1;
    int exponent = 0;

    while (power <= number / 2) {
        power *= 2;
        ++exponent;
    }

    while (number != 0) {
        if (number >= power) {
            number -= power;
            std::cout << "2^" << exponent << (number != 0 ? " + " : "\n");
        }

        power /= 2;
        --exponent;
    }

    return 0;
}
