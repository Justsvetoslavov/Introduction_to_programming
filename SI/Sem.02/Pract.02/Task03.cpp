// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	//Напишете програма, която приема две различни числа и казва кое е по голямо.
   //Използвайте тернарен оператор.
	int a, b;
	cout << "Enter the first number:";
	cin  >>a;
	cout << "Enter the second number:";
	cin >> b;
	int result=(a > b ? a : b);
	cout << "The bigger number is:" << result;
	return 0;

}

