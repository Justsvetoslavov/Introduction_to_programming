// ConsoleApplicationPrakt2Task4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int grade;
    cout << "Result(%): ";
    cin>> grade;
    if (grade >= 90)
    {
        cout << "Grade: 6+";
    }
    if (grade >= 80 && grade<90)
    {
        cout << "Grade: 6";
    }
    if (grade >= 70 && grade < 80)
    {
        cout << "Grade: 5";
    }
    if (grade >= 60 && grade < 70)
    {
        cout << "Grade: 4";
    }
    if (grade >= 40 && grade < 60)
    {
        cout << "Grade: 3";
    }

    if (grade < 40)
    {
        cout << "Grade: 2";
    }


    return 0;
}
