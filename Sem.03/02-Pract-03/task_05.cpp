#include <iostream>

int main() {
    int target = 0;

    do {
        std::cout << "Enter a number in [0;100]: ";
        std::cin >> target;
    } while (std::cin && (target < 0 || target > 100));

    int guess = -1;
    int attempts = 0;

    while (guess != target && std::cin >> guess) {
        ++attempts;

        if (guess < target) {
            std::cout << "Smaller\n";
        } else if (guess > target) {
            std::cout << "Bigger\n";
        }
    }

    std::cout << "Attempts: " << attempts << '\n';

    return 0;
}
