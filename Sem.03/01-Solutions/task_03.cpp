#include <iostream>

int main() {
    int a = 0, b = 0;
    std::cin >> a >> b;

    const int min = a > b ? b : a;
    bool isFirst = true;

    for (int i = min; i > 0; --i) {
        if (a % i == 0 && b % i == 0) {
            if (!isFirst) {
                std::cout << ' ';
            }
            isFirst = false;
            std::cout << i;
        }
    }

    std::cout << '\n';

    return 0;
}
