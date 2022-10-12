// ConsoleApplication2.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    char character;
    cin >> character;
    if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z'))
    {
        cout << "The character is a latin letter." << endl;
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
        case 'U':
        case 'y':
        case 'Y':
            cout << "The letter is a syllable." << endl;
            break;
        default:
            cout << "The letter is not a syllable." << endl;
            break;
        }
    }
    else cout << "The character is not a latin letter." << endl;

    
}

