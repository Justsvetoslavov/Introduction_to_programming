// task12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int day, month;
	cout << "Date:";
	cin >> day >> month;

	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
	{
		if (day < 31)
		{
			day += 1;
		}
		else if (day == 31)
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
			month += 1;
		    day = 1;
		}
	}
	else if(month==4 || month==6 || month==9 || month==11)
	{if(day<30)
	{
		day += 1;
	}
	else if (day==30)
	{
		day = 1;
		month += 1;
	}
	}
	cout << "Next date:" << day << "  " << month << endl;
}

