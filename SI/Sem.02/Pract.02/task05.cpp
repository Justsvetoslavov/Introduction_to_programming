// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
//�������� ��������, ����� ������ �� ����� ��� ����� - ������ �� ����������.
//���������� �� ��������� ���� ���� � ������� ����������.
{
	double a, b, c;
	cout << "Enter the first side of the triangle:";
	cin >> a;
	cout << "Enter the second side of triangle:";
	cin >> b;
	cout << "Enter the third side of triangle:";
	cin >> c;
	if(a<b+c && b<a+c && c<a+b )
	{
		cout << "�he triangle is valid";
	}
	else
	{
		cout << "The triangle is not valid";
	}
	return 0;
}
