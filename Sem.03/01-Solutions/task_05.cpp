#include <iostream>

int main() {
    int a = 0, b = 0;
    std::cin >> a >> b;

    if (a < b) {
        const int temp = a;
        a = b;
        b = temp;
    }

    while (b != 0) {
        const int r = a % b;

        a = b;
        b = r;
    }

    std::cout << a << '\n';

    return 0;
}
