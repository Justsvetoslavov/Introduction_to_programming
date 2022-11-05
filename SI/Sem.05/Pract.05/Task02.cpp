#include <iostream>
using namespace std;

const int SIZE = 20;

void swapNumbers(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void reverseAndSortNumbers(int* arr, int size, int startIndex)
{
	for (int i = startIndex; i < size; i++)
		for (int j = startIndex; j < size - 1; j++)
			if (arr[j] < arr[j + 1])
				swapNumbers(arr[j + 1], arr[j]);
}

void sortNumbers(int* arr, int size)
{
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swapNumbers(arr[j + 1], arr[j]);
}

void printArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
}

void segregateEvenOdd(int* arr, int size)
{
	int countOfEvenNumbers = 0;

	for (int i = 0; i < size - 1; i++)
	{
		if (arr[i] % 2 == 0)
			continue;

		for (int j = i + 1; j < size; j++)
			if (arr[j] % 2 == 0)
				swapNumbers(arr[i], arr[j]);
	}

	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 != 0)
			break;

		countOfEvenNumbers++;
	}

	sortNumbers(arr, countOfEvenNumbers);

	if (size != countOfEvenNumbers)
		reverseAndSortNumbers(arr, size, countOfEvenNumbers);

	printArray(arr, size);
}

void putNumbersInArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
		cin >> arr[i];
}

int main()
{
	int arr[SIZE];
	int size = 0;

	while (size < 1 || size > 20)
	{
		cout << "Enter how many numbers would you want (between 1 and 20): ";
		cin >> size;
	}

	putNumbersInArray(arr, size);
	segregateEvenOdd(arr, size);
}