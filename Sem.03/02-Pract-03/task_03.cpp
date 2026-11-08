#include <iostream>

int main() {
    long long number = 0;
    std::cin >> number;

    long long square = number * number;
    long long reversed = 0;

    while (square != 0) {
        reversed = reversed * 10 + square % 10;
        square /= 10;
    }

    std::cout << reversed << '\n'; // leading zeros disappear on their own

    return 0;
}
