#include <iostream>

void PrintLongestRun(unsigned long long n) {
    int bestLength = 0;
    int bestDigit = 0;

    while (n != 0) {
        // Narrowing unsigned long long to int is explicit; the remainder is 0..9, so it always fits.
        int digit = static_cast<int>(n % 10);
        int length = 0;

        while (n != 0 && n % 10 == digit) {
            ++length;
            n /= 10;
        }

        if (length > bestLength) {
            bestLength = length;
            bestDigit = digit;
        }
    }

    std::cout << bestLength << " (" << bestDigit << ")\n";
}

int main() {
    unsigned long long n = 0;
    std::cin >> n;

    PrintLongestRun(n);

    return 0;
}
