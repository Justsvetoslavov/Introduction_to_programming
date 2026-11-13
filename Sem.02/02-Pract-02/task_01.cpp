#include <iostream>

int main() {
    int year = 0;
    std::cin >> year;

    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        std::cout << "Leap year\n";
    } else {
        std::cout << "Not a leap year\n";
    }

    return 0;
}
