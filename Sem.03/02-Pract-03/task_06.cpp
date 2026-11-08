#include <iostream>

int main() {
    int n = 0;
    std::cin >> n;

    int missing = n * (n + 1) / 2;

    for (int i = 0; i < n - 1; ++i) {
        int number = 0;
        std::cin >> number;
        missing -= number;
    }

    std::cout << missing << '\n';

    return 0;
}
