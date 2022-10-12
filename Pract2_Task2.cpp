// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Enter an character: ";
    char character;
    std::cin >> character;
    if (((character >= 'A') && (character <= 'Z')) || ((character >= 'a') && (character <= 'z')))
    {
        switch (character)
        {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U': std::cout << "The character is a vowel";
            break;
        default: std::cout << "The character is a consonant";
            break;
        }
    }
    else
    {
        std::cout << "The character is not in the latin alphabet";
    }
}
