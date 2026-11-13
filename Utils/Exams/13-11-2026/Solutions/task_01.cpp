// K is a natural number (K >= 1), so it does not start with the digit 0.
// If every digit of K occurs in N at least as many times as in K, we can always build
// a valid permutation of N without leading zeros: put K at the beginning (as a prefix)
// and append the remaining digits of N after it. So the task reduces to checking that
// for every digit d (0 <= d <= 9) the count of d in N is at least the count of d in K.

#include <iostream>

int CountDigit(unsigned long long num, unsigned int digit) {
    int count = 0;
    while (num > 0) {
        if (num % 10 == digit) {
            count++;
        }
        num /= 10;
    }
    return count;
}

bool HasPermutationWithInfix(unsigned long long n, unsigned long long k) {
    for (unsigned int d = 0; d <= 9; d++) {
        if (CountDigit(n, d) < CountDigit(k, d)) {
            return false;
        }
    }
    return true;
}

int main() {
    unsigned long long n, k;
    std::cin >> n >> k;
    std::cout << (HasPermutationWithInfix(n, k) ? "true" : "false") << std::endl;
    return 0;
}
