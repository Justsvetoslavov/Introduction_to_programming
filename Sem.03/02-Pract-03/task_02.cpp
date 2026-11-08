#include <iostream>

int main() {
    int n = 0;
    std::cin >> n;

    for (int x = 1; x < n; ++x) {
        std::cout << "x = " << x << " y = " << n - x << '\n';
    }

    return 0;
}
