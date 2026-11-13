#include <iostream>

long long Abs(int num) {
    return num < 0 ? -static_cast<long long>(num) : num; // smallest value of int is -2147483648,
                                                         // which does not fit in int.
}

int main() {
    int num = 0;
    std::cin >> num;

    std::cout << Abs(num) << '\n';

    return 0;
}
