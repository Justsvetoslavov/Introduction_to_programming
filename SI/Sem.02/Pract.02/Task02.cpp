// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	char character;
	cin >> character;
	if ((character >= 65 && character <= 90) || (character >= 97 && character <= 122))
	{
		switch (character)
		{
		case 65:
		case 69:
		case 73:
		case 79:
		case 85:
		case 89:
		case 97:
		case 101:
		case 105:
		case 111:
		case 117:
		case 121:
			cout << "The symbol " << character << " is from the latin alphabet and it is a syllable";
			break;
		default: cout << "The symbol " << character << " is from the latin alphabet but NOT a syllable";
			break;
		}
	}
	else
		cout << "The symbol " << character << " is not from the latin alphabet";
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
