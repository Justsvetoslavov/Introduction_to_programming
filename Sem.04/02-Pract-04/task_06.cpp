#include <iostream>

double Fabs(double num) {
    return num < 0 ? -num : num;
}

int main() {
    double num = 0.0;
    std::cin >> num;

    std::cout << Fabs(num) << '\n';

    return 0;
}
