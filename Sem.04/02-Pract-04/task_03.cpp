#include <iostream>

bool IsPositive(int num) {
    return num > 0;
}

int main() {
    int num = 0;
    std::cin >> num;

    std::cout << std::boolalpha << IsPositive(num) << '\n';

    return 0;
}
