#include <iostream>

void swap(int& a, int& b) {
    int swap = a;
    a = b;
    b = swap;
}

int main() {
    int a, b;
    std::cin >> a >> b;
    swap(a,b);
    std::cout << a << " " << b << std::endl;
}