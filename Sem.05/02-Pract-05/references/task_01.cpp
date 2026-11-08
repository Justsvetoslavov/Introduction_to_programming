#include <iostream>

int CountDigits(int number) {
    int digits = 0;

    do {
        ++digits;
        number /= 10;
    } while (number != 0);

    return digits;
}

int PowerOfTen(int exponent) {
    int result = 1;

    for (int i = 0; i < exponent; ++i) {
        result *= 10;
    }

    return result;
}

// k is counted from the left, as in the examples
void SwapKthDigits(int& n, int& m, int k) {
    const int digitsN = CountDigits(n);
    const int digitsM = CountDigits(m);

    if (k < 1 || k > digitsN || k > digitsM) {
        return;
    }

    const int powerN = PowerOfTen(digitsN - k);
    const int powerM = PowerOfTen(digitsM - k);

    const int digitN = n / powerN % 10;
    const int digitM = m / powerM % 10;

    n += (digitM - digitN) * powerN;
    m += (digitN - digitM) * powerM;
}

int main() {
    int n = 0, m = 0, k = 0;
    std::cin >> n >> m >> k;

    SwapKthDigits(n, m, k);

    std::cout << n << ' ' << m << '\n';

    return 0;
}
