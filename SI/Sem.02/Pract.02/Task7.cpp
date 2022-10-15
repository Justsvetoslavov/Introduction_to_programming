// Task7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	char symbol, resSymbol;
	cout << "Enter a letter or any other symbol: ";
	cin >> symbol;
	if (symbol >= 'A' && symbol <= 'Z')
	{
		resSymbol = symbol + 32;
		cout << resSymbol << endl;
	}
	else if (symbol >= 'a' && symbol <= 'z')
	{
		resSymbol = symbol - 32;
		cout << resSymbol << endl;
	}
	else
	{
		cout << "Invalid character" << endl;
	}
}

