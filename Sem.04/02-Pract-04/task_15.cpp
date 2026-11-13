#include <iostream>
#include <limits>

constexpr int kLowerBound = 100;
constexpr int kUpperBound = 100000;

bool IsValid(int number) {
    return number >= kLowerBound && number <= kUpperBound;
}

int ReadValidNumber() {
    int number = 0;

    while (true) {
        std::cout << "Enter a number in [" << kLowerBound << ";" << kUpperBound << "]: ";
        if (!(std::cin >> number)) {
            if (std::cin.eof()) {
                break;
            }
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        if (IsValid(number)) {
            break;
        }
    }

    return number;
}

// For a number exactly between two powers, the smaller power is returned
int ClosestPowerOfTwo(int number) {
    int lower = 1;

    while (lower <= number / 2) {
        lower *= 2;
    }

    const int higher = lower * 2;

    return number - lower <= higher - number ? lower : higher;
}

int main() {
    int number = ReadValidNumber();

    if (!std::cin) {
        std::cout << "Invalid input\n";
        return 1;
    }

    std::cout << ClosestPowerOfTwo(number) << '\n';

    return 0;
}
