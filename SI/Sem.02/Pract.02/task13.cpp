// task13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int number;
	cout << "Enter a four-digit number";
	cin >> number;
	//a,b,c and d are units, tens, hundreds, thousands
	int d = number % 10;
	number /= 10;
	int c = number % 10;
	number /= 10;
	int b = number % 10;
	number /= 10;
	int a = number % 10;
	int numberOne, numberTwo;
	numberOne = a * 10 + d;
	numberTwo = b * 10 + c;
	if (numberOne < numberTwo)
	{
		cout << "less(" << numberOne << "<" << numberTwo << ")"<< endl;
	}
	else if (numberOne = numberTwo)
	{
		cout << "equal(" << numberOne << "=" << numberTwo << ")"<< endl;
	}
	else if   (numberOne > numberTwo)
	{
		cout << "greater(" << numberOne << ">" << numberTwo << ")" << endl;
	}
	return 0;


}

