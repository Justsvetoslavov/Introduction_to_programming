
#include <iostream>

int main()
{
    int result = 0;
    std::cout << "Result: ";
    std::cin >> result;
    if (result >= 0 && result <= 100)
    {
        if (result < 40)
        {
            std::cout << "Grade : 2";
        }
        if (result >= 40 && result < 60)
        {
            std::cout << "Grade : 3";
        }
        if (result >= 60 && result < 70)
        {
            std::cout << "Grade : 4";
        }
        if (result >= 70 && result < 80)
        {
            std::cout << "Grade : 5";
        }
        if (result >= 80 && result < 90)
        {
            std::cout << "Grade : 6";
        }
        if (result >= 90)
        {
            std::cout << "Grade : 6 + ";
        }
    }
    else
    {
        std::cout << "Invalid!";
    }

    return 0;
}

