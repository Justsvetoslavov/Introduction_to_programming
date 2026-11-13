#include <iostream>

int main() {
    double a = 0.0, b = 0.0;
    std::cin >> a >> b;

    const double temp = a;
    a = b;
    b = temp;

    std::cout << a << ' ' << b << '\n';

    return 0;
}
