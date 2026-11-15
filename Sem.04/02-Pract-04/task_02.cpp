#include <iostream>

bool IsEven(int num) {
    return num % 2 == 0;
}

int main() {
    int num = 0;
    std::cin >> num;

    std::cout << std::boolalpha << IsEven(num) << '\n';

    return 0;
}
