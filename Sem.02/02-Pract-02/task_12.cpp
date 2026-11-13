#include <iostream>

int main() {
    int day = 0, month = 0;
    std::cout << "Date: ";
    std::cin >> day >> month;

    int daysInMonth = 0;

    switch (month) {
        case 4: case 6: case 9: case 11:
            daysInMonth = 30;
            break;
        case 2:
            daysInMonth = 28;
            break;
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            daysInMonth = 31;
            break;
        default:
            std::cout << "Invalid date\n";
            return 1;
    }

    if (day < 1 || day > daysInMonth) {
        std::cout << "Invalid date\n";
        return 1;
    }

    if (day < daysInMonth) {
        ++day;
    } else {
        day = 1;
        month = month % 12 + 1;
    }

    std::cout << "Next date: " << day << ' ' << month << '\n';

    return 0;
}
