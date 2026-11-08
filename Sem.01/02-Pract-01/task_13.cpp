#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    double x1 = 0.0, y1 = 0.0, x2 = 0.0, y2 = 0.0;
    std::cin >> x1 >> y1 >> x2 >> y2;

    const double dx = x1 - x2;
    const double dy = y1 - y2;

    std::cout << std::fixed << std::setprecision(2) << std::sqrt(dx * dx + dy * dy) << '\n';

    return 0;
}
