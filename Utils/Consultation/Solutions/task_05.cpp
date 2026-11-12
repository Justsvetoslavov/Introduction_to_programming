#include <iostream>

int Abs(int number) {
    return number < 0 ? -number : number;
}

int CountDigit(int number, int digit) {
    int count = 0;

    while (number != 0) {
        if (number % 10 == digit) {
            ++count;
        }

        number /= 10;
    }

    return count;
}

bool HasRepeatedDigit(int number) {
    for (int digit = 0; digit <= 9; ++digit) {
        if (CountDigit(number, digit) >= 2) {
            return true;
        }
    }

    return false;
}

void PrintNumbersWithRepeatedDigits(int count) {
    bool isFirst = true;

    for (int i = 0; i < count; ++i) {
        int number = 0;
        std::cin >> number;

        if (HasRepeatedDigit(Abs(number))) {
            if (!isFirst) {
                std::cout << ' ';
            }

            std::cout << number;
            isFirst = false;
        }
    }

    std::cout << '\n';
}

int main() {
    int rows = 0;
    int cols = 0;
    std::cin >> rows >> cols;

    PrintNumbersWithRepeatedDigits(rows * cols);

    return 0;
}
