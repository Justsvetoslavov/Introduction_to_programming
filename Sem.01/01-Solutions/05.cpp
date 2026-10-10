#include <iostream>

int main() {
    int day = 0, month = 0, year = 0;

    // Enter day, month and year
    std::cout << "Enter day, month and year: ";

    // Read from std::cin (separated by space or newline)
    std::cin >> day >> month >> year;

    // Combine text, variables and control characters
    std::cout << "Date: " << day << "/" << month << "/" << year << '\n';

    return 0;
}