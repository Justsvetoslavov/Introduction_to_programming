#include <iostream>

int main() {
    int n = 0;
    std::cin >> n;

    // a <= b <= c prints each triangle only once
    for (int a = 1; a <= n; ++a) {
        for (int b = a; b <= n; ++b) {
            for (int c = b; c <= n; ++c) {
                if (a * a + b * b == c * c) {
                    std::cout << a << ' ' << b << ' ' << c << '\n';
                }
            }
        }
    }

    return 0;
}
