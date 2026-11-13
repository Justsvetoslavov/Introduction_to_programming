#include <iostream>

int main() {
    int a = 0, b = 0;
    std::cin >> a >> b;

    if (a > b) {
        const int temp = a;
        a = b;
        b = temp;
    }

    bool isFirst = true;

    for (int number = a; number <= b; ++number) {
        bool isPrime = number >= 2;

        for (int divisor = 2; divisor <= number / divisor; ++divisor) {
            if (number % divisor == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            if (!isFirst) {
                std::cout << ' ';
            }
            isFirst = false;
            std::cout << number;
        }
    }

    std::cout << '\n';

    return 0;
}
