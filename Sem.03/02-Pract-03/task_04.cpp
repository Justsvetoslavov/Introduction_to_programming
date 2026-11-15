#include <iostream>

int main() {
    int m = 0, n = 0;
    std::cin >> m >> n;

    for (int number = 1; number <= m * n; ++number) {
        std::cout << number << (number % n == 0 ? '\n' : ' ');
    }

    return 0;
}
