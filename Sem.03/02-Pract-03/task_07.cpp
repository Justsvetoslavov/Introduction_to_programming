#include <iostream>

int main() {
    int n = 0;
    std::cin >> n;

    // a <= b <= c prints each triangle only once
    for (int a = 1; a <= n; ++a) {
        for (int b = a; b <= n; ++b) {
            for (int c = b; c <= n; ++c) {
                const long long aSquare = static_cast<long long>(a) * a;
                const long long bSquare = static_cast<long long>(b) * b;
                const long long cSquare = static_cast<long long>(c) * c;
                if (aSquare + bSquare == cSquare) {
                    std::cout << a << ' ' << b << ' ' << c << '\n';
                }
            }
        }
    }

    return 0;
}
