// task02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	char symbol;
	cout << "Enter a symbol:";
	cin >> symbol;
	if('A'<= symbol && symbol <='Z'|| 'a'<= symbol && symbol <='z')
	{
		cout << "This symbol is from the Latin alphabet."<< endl;
	}
	else
	{ 
		cout << "This symbol is not from the Latin alphabet" << endl; 
	}
	switch(symbol)
	{
	case'A':cout << "vowel";
		break;
	case'E':cout << "vowel";
		break;
	case'I':cout << "vowel";
		break;
	case'O':cout << "vowel";
		break;
	case'U':cout << "vowel";
		break;
	case'Y':cout << "vowel";
		break;
	case'a':cout << "vowel";
		break;
	case'e':cout << "vowel";
		break;
	case'i':cout << "vowel";
		break;
	case'o':cout << "vowel";
		break;
	case'u':cout << "vowel";
		break;
	case'y':cout << "vowel";
		break;
	default:cout << "consonant";
	}
	return 0;
}

