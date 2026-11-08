#include <iostream>

int main() {
    int a = 0, b = 0;
    std::cin >> a >> b;

    const int minNumber = a > b ? b : a;

    int gcd = 1;

    for (size_t i = 2; i <= minNumber; ++i) {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }

    std::cout << gcd;

    return 0;
}
