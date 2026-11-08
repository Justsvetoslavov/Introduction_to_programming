#include <iostream>

int main() {
    int a = 0, b = 0, c = 0, d = 0, e = 0;
    std::cin >> a >> b >> c >> d >> e;

    for (long long x = -100; x <= 100; ++x) {
        // Horner's method: integer arithmetic only, no rounding from pow
        const long long value = ((((a * x + b) * x + c) * x + d) * x + e);

        if (value >= 0) {
            std::cout << x << ' ';
        }
    }

    std::cout << '\n';

    return 0;
}
