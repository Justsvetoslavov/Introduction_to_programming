// Ограничения на входа:
//   n >= 1 и n <= 10^18
//
// Цифрите се обхождат отдясно наляво. Обновяваме резултата само при строго по-дълга поредица,
// затова при равенство остава най-дясната.

#include <iostream>

void PrintLongestRun(unsigned long long n) {
    int bestLength = 0;
    int bestDigit = 0;

    while (n != 0) {
        int digit = n % 10;
        int length = 0;

        while (n != 0 && static_cast<int>(n % 10) == digit) {
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
