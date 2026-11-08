#include <iostream>

long long Pow(int num, unsigned exponent) {
    long long result = 1;

    for (unsigned i = 0; i < exponent; ++i) {
        result *= num;
    }

    return result;
}

int main() {
    int num = 0;
    unsigned exponent = 0;
    std::cin >> num >> exponent;

    std::cout << Pow(num, exponent) << '\n';

    return 0;
}
