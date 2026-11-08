#include <iostream>
#include <utility>

void Sort(int& a, int& b, int& c) {
    if (a > b) std::swap(a, b);
    if (a > c) std::swap(a, c);
    if (b > c) std::swap(b, c);
}

int main() {
    int x = 4, y = 5, z = 3;
    Sort(x, y, z);
    std::cout << x << " " << y << " " << z << std::endl; // 3 4 5
    return 0;
}
