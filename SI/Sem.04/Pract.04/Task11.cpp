// Task11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//int smallestDivisor(int a, int b, int c, int d)
//{
//	int smallestNum;
//
//	if (a < b && a < c && a < d)
//	{
//		smallestNum = a;
//	} else if (b < a && b < c && b < d)
//	{
//		smallestNum = b;
//	} else if (c < a && c < b && c < d)
//	{
//		smallestNum = c;
//	}
//	else
//	{
//		smallestNum = d;
//	}
//	
//}

int smallestDivisor(int a, int b)
{
	if (a < b)
	{
		int temp = a;
		a = b;
		b = temp;
	}

	int divisor;
	while (true)
	{
		if (a % b == 0)
		{
			divisor = b;
			return divisor;
		}

		divisor = a % b;
		a = b;
		b = divisor;
	}
}

int smallestDivisorForFourNums(int a, int b, int c, int d)
{
	int firstDiv = smallestDivisor(a, b);
	int secondDiv = smallestDivisor(c, d);

	if (firstDiv > secondDiv)
	{
		int temp = firstDiv;
		secondDiv = firstDiv;
		firstDiv = temp;
	}

	int finalDiv;
	for (int i = secondDiv; i >= firstDiv; --i)
	{
		if (a % i == 0 && b % i == 0 && c % i == 0 && d % i == 0)
		{
			return i;
		}
	}
}

int main()
{
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
