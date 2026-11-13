#include <iostream>

int main() {
    int n = 0;
    std::cin >> n;

    // n * (n + 1) overflows int before the division, starting at n = 46341.
    long long missing = static_cast<long long>(n) * (n + 1LL) / 2;

    for (int i = 0; i < n - 1; ++i) {
        int number = 0;
        std::cin >> number;
        missing -= number;
    }

    std::cout << missing << '\n';

    return 0;
}
