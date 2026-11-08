#include <iostream>

int* bigger(int* x, int* y) {
    if (*x > *y)
        return x;
    return y;
}

int main() {
    int a = 7, b = 3;
    int* p = bigger(&a, &b);
    std::cout << *p << std::endl; // 7
    return 0;
}
