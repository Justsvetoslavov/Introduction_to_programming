#include <iostream>

int PowerOfTwo(int exponent) {
    int result = 1;

    for (int i = 0; i < exponent; ++i) {
        result *= 2;
    }

    return result;
}

bool IsBalanced(int value) {
    int evenPositionsSum = 0;
    int oddPositionsSum = 0;
    bool isEvenPosition = true;

    while (value != 0) {
        if (isEvenPosition) {
            evenPositionsSum += value % 2;
        } else {
            oddPositionsSum += value % 2;
        }

        isEvenPosition = !isEvenPosition;
        value /= 2;
    }

    return evenPositionsSum == oddPositionsSum;
}

void PrintBinary(int value, int length) {
    for (int power = PowerOfTwo(length - 1); power > 0; power /= 2) {
        std::cout << (value / power) % 2;
    }

    std::cout << '\n';
}

void PrintBalancedNumbers(int n) {
    int total = PowerOfTwo(n);

    for (int value = 0; value < total; ++value) {
        if (IsBalanced(value)) {
            PrintBinary(value, n);
        }
    }
}

int main() {
    int n = 0;
    std::cin >> n;

    PrintBalancedNumbers(n);

    return 0;
}
