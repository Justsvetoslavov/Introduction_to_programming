// Task13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int num ;
	cout << "Enter a 4-digit number: ";
	cin >> num;
	if (num < 1000 || num > 9999)
	{
		cout << "Invalid input" << endl;
		return 1;
	}

	int firstDigit, secondDigit, thirdDigit, fourthDigit;
	fourthDigit = num % 10;
	num /= 10;
	thirdDigit = num % 10;
	num /= 10;
	secondDigit = num % 10;
	num /= 10;
	firstDigit = num % 10;
	
	int firstNum, secondNum;
	firstNum = firstDigit * 10 + fourthDigit;
	secondNum = secondDigit * 10 + thirdDigit;

	if (firstNum < secondNum)
	{
		cout << "less (" << firstNum << "<" << secondNum << ")";
	}
	else if (firstNum > secondNum)
	{
		cout << "greater (" << firstNum << ">" << secondNum << ")";
	}
	else
	{
		cout << "equal (" << firstNum << "=" << secondNum << ")";
	}
}
