#include <iostream>

int main() {
    int a = 0, b = 0, c = 0;
    std::cin >> a >> b >> c;

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    if (a > c) {
        int temp = a;
        a = c;
        c = temp;
    }

    if (b > c) {
        int temp = b;
        b = c;
        c = temp;
    }

    std::cout << a << ' ' << b << ' ' << c << '\n';

    return 0;
}
