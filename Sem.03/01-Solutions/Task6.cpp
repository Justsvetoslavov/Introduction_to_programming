#include <iostream>

int main() {
    int a;
    std::cin >> a;

    if (a == 2) {
        std::cout << "Prime";
        return 0;
    }

    if (a % 2 == 0 || a == 1) {
        std::cout << "Not Prime";
        return 0;
    }

    double squareRoot = std::sqrt(a);
    for (int i = 3; i <= squareRoot; i += 2) {
        if (a % i == 0) {
            std::cout << "Not Prime";
            return 0;
        }
    }

    std::cout << "Prime";

    return 0;
}
