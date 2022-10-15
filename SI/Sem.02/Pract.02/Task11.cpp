// Task11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "Enter three numbers: ";
	cin >> a >> b >> c;
	int max, mid, min;
	if (a>=b && a>=c)
	{
		max = a;
		if (b > c)
		{
			mid = b;
			min = c;
		}
		else
		{
			mid = c;
			min = b;
		}
	}
	else if (b >= a && b >= c)
	{
		max = b;
		if (a > c)
		{
			mid = a;
			min = c;
		}
		else
		{
			mid = c;
			min = a;
		}
	}
	else if(c >= a && c >= b)
	{
		max = c;
		if (a > b)
		{
			mid = a;
			min = b;
		}
		else
		{
			mid = b;
			min = a;
		}
	}
	cout << "The maximal possible number is: " << max << mid << min << endl;
}
