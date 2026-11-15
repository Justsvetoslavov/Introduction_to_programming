#include <iostream>

int Sum(int a, int b) {
    return a + b;
}

int main() {
    int a = 0, b = 0;
    std::cin >> a >> b;

    std::cout << Sum(a, b) << '\n';

    return 0;
}
