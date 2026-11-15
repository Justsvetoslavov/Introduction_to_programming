#include <iostream>

int* Smallest(int* a, int* b, int* c) {
    int* result = a;

    if (*b < *result) {
        result = b;
    }

    if (*c < *result) {
        result = c;
    }

    return result;
}

int main() {
    int a = 0, b = 0, c = 0;
    std::cin >> a >> b >> c;

    *Smallest(&a, &b, &c) = 0;

    std::cout << a << ' ' << b << ' ' << c << '\n';

    return 0;
}
