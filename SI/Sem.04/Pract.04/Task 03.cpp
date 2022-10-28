#include <iostream>

bool isPositive(int num)
{
   return (num>0);
}

bool isNegative(int num)
{
    return (num<0);
}

int main()
{
    int number;
    std::cout << "Please enter a number: ";
    std::cin >> number;
    std::cout << std::endl << "Is the number positive: " << std::boolalpha << isPositive(number) << std::endl;
    std::cout << std::endl << "Is the number negative: " << std::boolalpha << isNegative(number) << std::endl;
}
