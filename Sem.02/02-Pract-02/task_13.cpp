#include <iostream>

int main() {
    int number = 0;
    std::cin >> number;

    if (number < 1000 || number > 9999) {
        std::cout << "Invalid number\n";
        return 1;
    }

    const int first = number / 1000 * 10 + number % 10;
    const int second = number / 100 % 10 * 10 + number / 10 % 10;

    if (first < second) {
        std::cout << "less (" << first << '<' << second << ")\n";
    } else if (first == second) {
        std::cout << "equal (" << first << '=' << second << ")\n";
    } else {
        std::cout << "greater (" << first << '>' << second << ")\n";
    }

    return 0;
}
