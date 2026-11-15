#include <iostream>

bool IsInInterval(int number, int from, int to) {
    return from <= number && number <= to;
}

int main() {
    int number = 0, from = 0, to = 0;
    std::cin >> number >> from >> to;

    std::cout << std::boolalpha << IsInInterval(number, from, to) << '\n';

    return 0;
}
