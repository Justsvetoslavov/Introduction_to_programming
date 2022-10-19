// ConsoleApplication11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
//Да се въведат от конзолата 3 цифри и да се изведе най - голямото число, което може да се получи,
//ако тези цифри са единици, десетици и стотици.
{
	int a, b, c;
	cout << "Enter 3 digits:";
	cin >> a >> b >> c;
	if(a>b && a>>c && b>c)
	{
		cout << a << b << c;
	}
	else if(a>b && a>c && c>b)
	{
		cout << a << c << b;
	}
	else if(c>a && c>b && a>b)
	{
		cout << c << a << b;
	}
	else if(c>a && c>b && b>a)
	{
		cout << c << b << a;
	}
	else if (b>a && b>c && a>c)
	{
		cout << b << a << c;
	}
	else if (b>a && b>c && c>a)
	{
		cout << b << c << a;
	}

}
