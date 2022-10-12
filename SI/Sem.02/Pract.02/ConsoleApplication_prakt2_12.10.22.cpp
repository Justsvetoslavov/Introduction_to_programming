// ConsoleApplication_prakt2_12.10.22.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int year;
    cin >> year;
    if (year > 0 && year % 100 != 0 && year % 4 == 0)
    {
        cout << year << " is a leap year" << endl;
    }
    else
    {
        cout << year << " is not a leap year" << endl;
    }
    return 0;
}

