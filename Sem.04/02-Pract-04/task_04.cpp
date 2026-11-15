#include <iostream>

bool IsNegative(int num) {
    return num < 0;
}

int main() {
    int num = 0;
    std::cin >> num;

    std::cout << std::boolalpha << IsNegative(num) << '\n';

    return 0;
}
