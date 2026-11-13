#include <cmath>
#include <iostream>

int main() {
    // long long, because b * b and 4 * a * c can be up to 4 * 10^18 and do not fit in int.
    long long a = 0, b = 0, c = 0;
    std::cin >> a >> b >> c;

    if (a == 0) {
        if (b != 0) {
            double x = static_cast<double>(-c) / static_cast<double>(b);
            // Doubles have a negative zero: 0.0 / -2 is -0.0 and prints as "-0".
            // -0.0 == 0.0 is true, so this assignment replaces it with 0.0.
            if (x == 0.0) {
                x = 0.0;
            }
            std::cout << "Linear equation, x = " << x << '\n';
        } else if (c != 0) {
            std::cout << "No solutions\n";
        } else {
            std::cout << "Every x is a solution\n";
        }

        return 0;
    }

    // With integer coefficients the discriminant is exact, so comparing it with 0 is safe.
    const long long discriminant = b * b - 4 * a * c;

    const double minusB = static_cast<double>(-b);
    const double twoA = static_cast<double>(2 * a);

    if (discriminant > 0) {
        const double squareRoot = std::sqrt(static_cast<double>(discriminant));
        std::cout << "x1 = " << (minusB - squareRoot) / twoA
                  << ", x2 = " << (minusB + squareRoot) / twoA << '\n';
    } else if (discriminant == 0) {
        double x = minusB / twoA;
        // Same negative-zero case as above, e.g. for b = 0 and a < 0.
        if (x == 0.0) {
            x = 0.0;
        }
        std::cout << "x = " << x << '\n';
    } else {
        std::cout << "No real roots\n";
    }

    return 0;
}
