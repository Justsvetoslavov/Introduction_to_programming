// Task9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int firstNum, secondNum, thirdNum;
	cout << "Enter three numbers: ";
	cin >> firstNum >> secondNum >> thirdNum;
	if (firstNum < secondNum && firstNum < thirdNum && secondNum < thirdNum)
	{
		cout << firstNum << " " << secondNum << " " << thirdNum << endl;
	}
	else if(firstNum < secondNum && firstNum < thirdNum && secondNum > thirdNum)
	{
		cout << firstNum << " " << thirdNum << " " << secondNum << endl;
	}
	else if (secondNum < firstNum && secondNum < thirdNum && firstNum < thirdNum)
	{
		cout << secondNum << " " << firstNum << " " << thirdNum << endl;
	}
	else if (secondNum < firstNum && secondNum < thirdNum && firstNum > thirdNum)
	{
		cout << secondNum << " " << thirdNum << " " << firstNum << endl;
	}
	else if (thirdNum < firstNum && thirdNum < secondNum && firstNum < secondNum)
	{
		cout << thirdNum << " " << firstNum << " " << secondNum << endl;
	}
	else
	{
		cout << thirdNum << " " << secondNum << " " << firstNum << endl;
	}
}

