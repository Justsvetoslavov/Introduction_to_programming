#include <iostream>

// The row is processed while it is read: only the previous number and the first difference are kept.
bool ReadAndCheckArithmeticRow(int n) {
    int previous = 0;
    std::cin >> previous;

    // The difference of two int values may not fit in int, so it is stored in long long.
    long long difference = 0;
    bool isArithmetic = true;

    for (int i = 1; i < n; ++i) {
        int current = 0;
        std::cin >> current;

        long long currentDifference = static_cast<long long>(current) - previous;

        if (i == 1) {
            difference = currentDifference;
        } else if (currentDifference != difference) {
            // No early return: the rest of the row must still be read,
            // otherwise the next row would start at the wrong place in the input.
            isArithmetic = false;
        }

        previous = current;
    }

    return isArithmetic;
}

int main() {
    int n = 0;
    std::cin >> n;

    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (ReadAndCheckArithmeticRow(n)) {
            ++count;
        }
    }

    std::cout << count << '\n';

    return 0;
}
