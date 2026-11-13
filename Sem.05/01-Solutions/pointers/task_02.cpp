#include <iostream>

int* Bigger(int* x, int* y) {
    if (*x > *y)
        return x;
    return y;
}

int main() {
    int a = 7, b = 3;
    int* p = Bigger(&a, &b);
    std::cout << *p << std::endl; // 7
    return 0;
}
