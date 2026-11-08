#include <cmath>
#include <iostream>

int main() {
    double a = 0.0, b = 0.0, c = 0.0;
    std::cin >> a >> b >> c;

    if (a == 0) {
        if (b != 0) {
            std::cout << "Linear equation, x = " << -c / b << '\n';
        } else if (c != 0) {
            std::cout << "No solutions\n";
        } else {
            std::cout << "Every x is a solution\n";
        }

        return 0;
    }

    const double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        const double squareRoot = std::sqrt(discriminant);
        std::cout << "x1 = " << (-b - squareRoot) / (2 * a)
                  << ", x2 = " << (-b + squareRoot) / (2 * a) << '\n';
    } else if (discriminant == 0) {
        std::cout << "x = " << -b / (2 * a) << '\n';
    } else {
        std::cout << "No real roots\n";
    }

    return 0;
}
