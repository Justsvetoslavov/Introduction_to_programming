// Task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	char input;
	cout << "Enter a symbol: ";
	cin >> input;
	bool isLatinLetter = false;
	
	if ((input >= 'A' && input <= 'Z') || (input >= 'a' && input <= 'z'))
	{
		cout << "This symbol is from latin alphabet " << endl;
		isLatinLetter = true;
	}
	if (isLatinLetter)
	{
		if (input == 'a' || input == 'A' || input == 'e' || input == 'E' || input == 'i' || input == 'I' || input == 'o' || input == 'O' || input == 'u' || input == 'U')
		{
			cout << "And this symbol is also vowel " << endl;
		}
		else
		{
			cout << "And this symbol is consonant " << endl;
		}
	}
	return 0;
}

