// Pract.02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


using namespace std;

int main()
{
	//ex 13

	int inputNumber = 0;
	cout << "Enter number: ";
	cin >> inputNumber;
	int copiedNumber = inputNumber;

	int newNumberLastDigits = ((copiedNumber / 1000) % 10) * 10 + copiedNumber % 10;
	int newNumberInnerDigits = ((copiedNumber / 100) % 10) * 10 + (copiedNumber/10) % 10;

	if (newNumberLastDigits < newNumberInnerDigits)
	{
		cout << newNumberLastDigits<<" < "<<newNumberInnerDigits << endl;
	}
	else if (newNumberLastDigits > newNumberInnerDigits)
	{
		cout << newNumberLastDigits << " > " << newNumberInnerDigits << endl;
	}
	else
	{
		cout << newNumberLastDigits << " = " << newNumberInnerDigits << endl;
	}
}