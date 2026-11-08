#include <iostream>

void Divide(int a, int b, int* quotient, int* remainder) {
    *quotient = a / b;
    *remainder = a % b;
}

int main() {
    int a = 0, b = 0, quotient = 0, remainder = 0;
    std::cin >> a >> b;

    Divide(a, b, &quotient, &remainder);

    std::cout << quotient << ' ' << remainder << '\n';

    return 0;
}
