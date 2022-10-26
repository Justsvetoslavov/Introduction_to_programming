#include <iostream>

void isEven(int num)
{
    if (num % 2 == 0)
    {
        std::cout << "The number is even.";
    }
    else
    {
        std::cout << "The number is not even.";
    }
}

int main()
{
    int number;
    std::cout << "Please enter a number: ";
    std::cin >> number;
    std::cout << std::endl;
    isEven(number);
}
