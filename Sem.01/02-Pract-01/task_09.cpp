#include <cmath>
#include <iostream>

int main() {
    double a = 0.0, b = 0.0, c = 0.0;

    std::cout << "a = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;
    std::cout << "c = ";
    std::cin >> c;

    const double squareRoot = std::sqrt(b * b - 4 * a * c);

    std::cout << "x1 = " << (-b - squareRoot) / (2 * a)
              << ", x2 = " << (-b + squareRoot) / (2 * a) << '\n';

    return 0;
}
