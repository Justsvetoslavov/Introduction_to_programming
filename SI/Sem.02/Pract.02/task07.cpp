// ConsoleApplication7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
//�� �� ������ ��������, ����� ���� �� ��������� ������ �, ��� � ����� �����, ������� ����������� ������, ��� � ������ �����,
//������� ����������� �����, � ��� �� � �����, �� ������ ��������� �� ��������� ������.
{
	char symbol;
	cout << "Enter a symbol: ";
	cin >> symbol;
	if ('a' <= symbol <= 'z')
		 symbol = symbol - 32;
	{
		cout << symbol;
	}
	else if ('A' <= symbol <= 'Z')
		 symbol=symbol+32;
		
	{
		cout << symbol = symbol +32 ;
	}
	else 
	{
		cout << "invalid symbol";
	}
	
}

