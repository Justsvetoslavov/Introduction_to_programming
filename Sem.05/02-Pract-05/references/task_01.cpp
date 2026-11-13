#include <iostream>

int CountDigits(long long number) {
    int digits = 0;

    do {
        ++digits;
        number /= 10;
    } while (number != 0);

    return digits;
}

long long PowerOfTen(int exponent) {
    long long result = 1;

    for (int i = 0; i < exponent; ++i) {
        result *= 10;
    }

    return result;
}

// k is counted from the left of the absolute value, as in the examples. The signs are kept.
// The inputs are below 10^18 in absolute value, so the swapped values stay below 10^18 and fit in long long.
void SwapKthDigits(long long& n, long long& m, int k) {
    const long long signN = n < 0 ? -1 : 1;
    const long long signM = m < 0 ? -1 : 1;
    long long absN = n * signN;
    long long absM = m * signM;

    const int digitsN = CountDigits(absN);
    const int digitsM = CountDigits(absM);

    if (k < 1 || k > digitsN || k > digitsM) {
        return;
    }

    const long long powerN = PowerOfTen(digitsN - k);
    const long long powerM = PowerOfTen(digitsM - k);
    const long long digitN = absN / powerN % 10;
    const long long digitM = absM / powerM % 10;

    absN += (digitM - digitN) * powerN;
    absM += (digitN - digitM) * powerM;

    n = signN * absN;
    m = signM * absM;
}

int main() {
    long long n = 0, m = 0;
    int k = 0;
    std::cin >> n >> m >> k;

    SwapKthDigits(n, m, k);

    std::cout << n << ' ' << m << '\n';
    return 0;
}
