// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Enter exam score: ";
    int score;
    std::cin >> score;
    if ((score < 0) || (score > 100))
    {
        std::cout << "Invalid score";
    }
    else if (score < 40)
    {
        std::cout << "Grade: 2";
    }
    else if (score < 60)
    {
        std::cout << "Grade: 3";
    }
    else if (score < 70)
    {
        std::cout << "Grade: 4";
    }
    else if (score < 80)
    {
        std::cout << "Grade: 5";
    }
    else if (score < 90)
    {
        std::cout << "Grade: 6";
    }
    else
    {
        std::cout << "Grade: 6+";
    }
}
