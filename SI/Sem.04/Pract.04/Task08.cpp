// Task08.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

long long pow(int num, unsigned int N)
{
	for (int i = 1; i <= N; i++)
	{
		return num * N;
	}
}

int main()
{
	cout << pow(2,7);
}
