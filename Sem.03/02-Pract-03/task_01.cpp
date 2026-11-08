#include <iostream>

int main() {
    int n = 0;
    std::cin >> n;

    for (int row = 1; row <= n; ++row) {
        for (int number = 1; number <= row; ++number) {
            std::cout << number;
        }

        std::cout << '\n';
    }

    return 0;
}
