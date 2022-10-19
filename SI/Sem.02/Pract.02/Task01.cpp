// task01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int year;
	cout << "Enter a year:";
	cin >> year;
	if(year %4 ==0 || year %400 ==0)
	{
		cout << "This year is leap year.";
	}
	else if(year%100 !=0)
	{
		cout << "This year is not a leap year.";
	}
	return 0;
}

