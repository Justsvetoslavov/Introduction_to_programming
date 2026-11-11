// Ограничения на входа:
//   N >= 0 и N <= 2^64 - 1
//   K >= 0 и K <= 2^64 - 1
//
// Работим с брой цифри, за да няма препълване: 10^20 не се събира в unsigned long long.
// N трябва да има поне с 2 цифри повече от K (по една за A и B), затова степените не надвишават 10^18.
//
// За всяка възможна дължина на B: B = N % bPower, а rest = N / bPower трябва да завършва на K.
// Границата на цикъла гарантира, че пред K остава непразно A. B няма водещи нули точно когато
// B >= bPower / 10, а това гарантира и B > 0. Числото 0 има една цифра.

#include <iostream>

int CountDigits(unsigned long long number) {
    int count = 1;

    while (number >= 10) {
        number /= 10;
        ++count;
    }

    return count;
}

unsigned long long PowerOf10(int exponent) {
    unsigned long long result = 1;

    for (int i = 0; i < exponent; ++i) {
        result *= 10;
    }

    return result;
}

bool IsValidSplit(unsigned long long n, unsigned long long k, unsigned long long kPower, unsigned long long bPower) {
    unsigned long long b = n % bPower;
    unsigned long long rest = n / bPower;

    return rest % kPower == k && b >= bPower / 10;
}

bool HasConcatenation(unsigned long long n, unsigned long long k) {
    int kDigits = CountDigits(k);
    int maxBDigits = CountDigits(n) - kDigits - 1;

    if (maxBDigits < 1) {
        return false;
    }

    unsigned long long kPower = PowerOf10(kDigits);

    for (int bDigits = 1; bDigits <= maxBDigits; ++bDigits) {
        if (IsValidSplit(n, k, kPower, PowerOf10(bDigits))) {
            return true;
        }
    }

    return false;
}

int main() {
    unsigned long long n = 0;
    unsigned long long k = 0;
    std::cin >> n >> k;

    std::cout << std::boolalpha << HasConcatenation(n, k) << '\n';

    return 0;
}
