

#include <iostream>

int main()
{
    unsigned int number = 0;
    std::cin >> number;

    if (number < 0)
    {
        std::cout << "Invalid input";
        return 0;
    }

    unsigned int sqrt = number * number;

    while (sqrt != 0)
    {
        std::cout << (sqrt % 10);
        sqrt /= 10;
    }
    std::cout << std::endl;
}

