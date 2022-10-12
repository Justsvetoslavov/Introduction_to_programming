// Task4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int grade;
	cout << "Enter a number between 0 and 100: ";
	cin >> grade;

	if (grade >= 90)
	{
		cout << "The grade is: 6+";
	}
	else if(grade >= 80)
	{
		cout << "The grade is: 6";
	}
	else if (grade >= 70)
	{
		cout << "The grade is: 5";
	}
	else if (grade >= 60)
	{
		cout << "The grade is: 4";
	}
	else if (grade >= 40)
	{
		cout << "The grade is: 3";
	}
	else cout << "The grade is: 2";
}

