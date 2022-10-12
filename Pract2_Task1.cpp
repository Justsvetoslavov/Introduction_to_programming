// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Enter an character: ";
    int year;
    std::cin >> year;
    ((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0))) ? (std::cout << "Is a leap year") : (std::cout << "Is not a leap year");
}
