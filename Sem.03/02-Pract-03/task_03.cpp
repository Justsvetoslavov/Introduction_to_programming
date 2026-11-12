#include <iostream>

int main() {
    long long number = 0;
    std::cin >> number;

    // number <= 10^9, so the square is at most 10^18 and fits in long long.
    long long square = number * number;
    long long reversed = 0;

    // Building the reversed number drops the leading zeros by itself: 100 -> 001 -> 1.
    while (square != 0) {
        reversed = reversed * 10 + square % 10;
        square /= 10;
    }

    std::cout << reversed << '\n';
    return 0;
}
