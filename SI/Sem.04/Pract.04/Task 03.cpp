#include <iostream>

bool isPositive(int num)
{
    if (num > 0)
    {
        return true;
    }
    else 
    { 
        return false;
    }
}

bool isNegative(int num)
{
    if (num < 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int number;
    std::cout << "Please enter a number: ";
    std::cin >> number;
    std::cout << std::endl << "Is the number positive: " << std::boolalpha << isPositive(number) << std::endl;
    std::cout << std::endl << "Is the number negative: " << std::boolalpha << isNegative(number) << std::endl;
}
