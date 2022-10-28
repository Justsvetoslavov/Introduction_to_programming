#include <iostream>

int abs(int num)
{
    int result=(num >= 0) ? num :  -num;
    return result;
}

double fabs(double num)
{
   int result = (num >= DBL_EPSILON) ? num : -num;
    return result;
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