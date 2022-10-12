// Task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int year;
	cout << "Enter a year: ";
	cin >> year;

	if ( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) )  
	{
		cout << "this year is a leap year" << endl;
	}
	else
	{
		cout << "this year is not a leap year" << endl;
	}
	
	
	return 0;
}

