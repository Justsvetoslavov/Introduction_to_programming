#include <iostream>

int abs(int num)
{
    if (num >= 0)
    {
        return num;
    }
    else
    {
        return -num;
    }
}

double fabs(double num)
{
    if (num >= 0)
    {
        return num;
    }
    else
    {
        return -num;
    }
}

int main()
{
    int number;
    double number2;
    std::cout << "Please enter a whole number: ";
    std::cin >> number;
    std::cout << "Please enter a decimal number: ";
    std::cin >> number2;
    std::cout << std::endl << "The absolute value of the whole number is: " << abs(number);
    std::cout << std::endl << "The absolute value of the decimal number is: " << fabs(number2);
}