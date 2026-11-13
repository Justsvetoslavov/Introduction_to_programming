#include <iostream>
#include <limits>

// Checks whether a * b fits in long long without computing the product.
// Signed overflow is undefined behavior, so we must check before multiplying, not after.
bool ProductFits(long long a, long long b) {
    const long long max = std::numeric_limits<long long>::max();
    const long long min = std::numeric_limits<long long>::min();

    if (a > 0) {
        // Positive product must stay <= max; negative product must stay >= min.
        return b > 0 ? a <= max / b : b >= min / a;
    }

    if (b > 0) {
        return a >= min / b;
    }

    // Both are <= 0, so the product is >= 0 and must stay <= max.
    return a == 0 || b >= max / a;
}

// Stores num^exponent in result. Returns false if the value does not fit in long long.
bool Pow(int num, unsigned exponent, long long& result) {
    result = 1;

    for (unsigned i = 0; i < exponent; ++i) {
        if (!ProductFits(result, num)) {
            return false;
        }
        result *= num;
    }

    return true;
}

int main() {
    int num = 0;
    unsigned exponent = 0;
    std::cin >> num >> exponent;

    long long result = 0;
    if (!Pow(num, exponent, result)) {
        std::cout << "Result does not fit\n";
        return 1;
    }

    std::cout << result << '\n';
    return 0;
}
