#include <iostream>

// a and b are within [-10^9, 10^9], so the INT_MIN / -1 case, which overflows int, cannot occur.
bool Divide(int a, int b, int* quotient, int* remainder) {
    if (b == 0 || quotient == nullptr || remainder == nullptr) {
        return false;
    }

    *quotient = a / b;
    *remainder = a % b;
    return true;
}

int main() {
    int a = 0, b = 0, quotient = 0, remainder = 0;
    std::cin >> a >> b;

    if (!Divide(a, b, &quotient, &remainder)) {
        std::cout << "Division by zero\n";
        return 1;
    }

    std::cout << quotient << ' ' << remainder << '\n';

    return 0;
}
