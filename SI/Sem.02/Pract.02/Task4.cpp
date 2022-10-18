// ConsoleApplicationPrakt2Task4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int grade;
    cout << "Result(%): ";
    cin >> grade;

    if (grade < 40)
    {
        cout << "Grade: 2";
    }
    else if (grade < 60)
    {
        cout << "Grade: 3";
    }

    else if (grade < 70)
    {
        cout << "Grade: 4";
    }
    else if (grade < 80)
    {
        cout << "Grade: 5";
    }
    else if (grade < 90)
    {
        cout << "Grade: 6";
    }
    else if (grade >= 90)
    {
        cout << "Grade: 6+";
    }
    return 0;
}
