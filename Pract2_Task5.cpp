// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Enter three lengths of a triangle: ";
    int a;
    int b;
    int c;
    std::cin >> a >> b >> c;
    ((a <= 0) || (b <= 0) || (c <= 0) || (a + b <= c) || (a + c <= b) || (b + c <= a)) ? (std::cout << "Invalid triangle") : (std::cout << "Valid triangle");
}
