#include <iostream>

int Abs(int num) {
    return num < 0 ? -num : num;
}

int main() {
    int num = 0;
    std::cin >> num;

    std::cout << Abs(num) << '\n';

    return 0;
}
