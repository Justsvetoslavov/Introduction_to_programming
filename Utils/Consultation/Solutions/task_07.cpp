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

// B is the last digits of N and rest is everything before them; rest must end with the digits of K.
// B has no leading zeros exactly when B >= bPower / 10, which also guarantees B > 0.
bool IsValidSplit(unsigned long long n, unsigned long long k, unsigned long long kPower, unsigned long long bPower) {
    unsigned long long b = n % bPower;
    unsigned long long rest = n / bPower;

    return rest % kPower == k && b >= bPower / 10;
}

// We work with digit counts instead of powers to avoid overflow: 10^20 does not fit in unsigned long long.
bool HasConcatenation(unsigned long long n, unsigned long long k) {
    int kDigits = CountDigits(k);
    // N needs at least 2 more digits than K: at least one for A and one for B.
    int maxBDigits = CountDigits(n) - kDigits - 1;

    if (maxBDigits < 1) {
        return false;
    }

    // N has at most 20 digits, so kDigits and bDigits are at most 18 and the powers fit.
    unsigned long long kPower = PowerOf10(kDigits);

    // The upper bound leaves at least one digit for A before K. A cannot start with 0, because N does not.
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
