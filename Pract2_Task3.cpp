// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Enter two numbers: ";
    int a;
    int b;
    std::cin >> a >> b;
    if (a != b)
    {
        (a > b) ? (std::cout << "The bigger number is: " << a) : (std::cout << "The bigger number is: " << b);
    }
    else
    {
        std::cout << "The numbers are equal";
    }
}
