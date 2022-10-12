// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //ex 1
    int year = 0;
    cout << "Enter year: ";
    cin >> year;
    if (year % 4 == 0)
    {
        cout << "Leap year!" << endl;
    }
    else
    {
        cout << "Not a leap year!" << endl;
    }


}

