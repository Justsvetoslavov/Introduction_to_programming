// ConsoleApplicationPrakt2Task3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int number1, number2;
	cout << "Enter two numbers"<<endl;
	cin >> number1>> number2;
	cout << ((number1 != number2 && number1 > number2) ? "The first one is larger" : "The second one is smaller");

}

