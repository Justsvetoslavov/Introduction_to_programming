
#include <iostream>

int main()
{
    int year;
    std::cout << "Enter a year: ";
    std::cin >> year;
    if ((0 == year % 4 )||( 0 != year % 100 && 0 == year % 400) )
    {
        std::cout << "It is a leap year!";
    }
    else
    {
        std::cout << "It is not a leap year!";
    }
    return 0;
}

