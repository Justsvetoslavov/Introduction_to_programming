#include <iostream>
using namespace std;

bool checkIfNumberIsPolindrom(int number, int* arr, int size)
{
	int lastDigit;
	for (int i = 0; i < size; ++i)
	{
		lastDigit = number % 10;
		arr[i] = lastDigit;
		number /= 10;
	}

	int reversedArr[4];
	int counter = 0;
	for (int i = size - 1; i >= 0; --i)
	{
		reversedArr[counter++] = arr[i];
	}

	for (int i = 0; i < size; ++i)
	{
		if (arr[i] != reversedArr[i])
		{
			return  false;
		}
	}

	return  true;
}

int main()
{
	int number = 1221;
	int arr[4];

	checkIfNumberIsPolindrom(number, arr, 4);
}
