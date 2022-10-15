// Task12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int day, month;
	cout << "Enter a date(day month): ";
	cin >> day >> month;
	cout << endl;
	
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
	{
		if (day<31)
		{
			day += 1;
		}
		else if(day == 31)
		{
			day = 1;
			month += 1;
		}
	}
	else if (month == 2)
	{
		if (day < 28)
		{
			day += 1;
		}
		else if (day == 28)
		{
			day = 1;
			month += 1;

		}
	}
	else
	{
		if (day < 30)
		{
			day += 1;
		}
		else if (day == 30)
		{
			day = 1;
			month += 1;
		}
	}
	cout << "Next date: " << day << " " << month << endl;
}

