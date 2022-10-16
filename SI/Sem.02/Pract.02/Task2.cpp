// ConsoleApplicationPrakt2Task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    char symbol;
    cout << "Enter a symbol";
    cin >> symbol;
    if ('A' <= symbol && symbol<= 'Z' || 'a' <= symbol && symbol <= 'z')
    {
        switch (symbol)
        {
        case 'a': ;
        case 'e':;
        case 'i':;
        case 'o':;
        case 'u':;
        case 'y':;
        case 'A':;
        case 'E':;
        case 'I':;
        case 'O':;
        case 'U':;
        case 'Y': cout << "The symbol is a vowel letter"; break;
        default: cout << "The symbol is a consonant letter";

        }
    }

}

