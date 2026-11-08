#include <iostream>

void Swap(int& a, int& b) {
    const int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 7;
    Swap(x, y);
    std::cout << x << " " << y << std::endl; // 7 5
    return 0;
}
