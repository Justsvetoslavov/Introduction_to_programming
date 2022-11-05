#include <iostream>
using namespace std;

const int SIZE = 20;

void sortNumbers(int* arr, int size)
{
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size - i - 1; j++)
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
}

void printArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i];
}

void segregateEvenOdd(int* arr, int size, int* evenArr, int* oddArr)
{
	int countOfEvenNumbers = 0;
	int countOfOddNumbers = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0)
		{
			evenArr[countOfEvenNumbers] = arr[i];
			countOfEvenNumbers++;
		}

		else
		{
			oddArr[countOfOddNumbers] = arr[i];
			countOfOddNumbers++;
		}
	}

	sortNumbers(evenArr, countOfEvenNumbers);
	sortNumbers(oddArr, countOfOddNumbers);

	printArray(evenArr, countOfEvenNumbers);
	printArray(oddArr, countOfOddNumbers);
}

void putNumbersInArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
		cin >> arr[i];
}

int main()
{
	int arr[SIZE];
	int evenArr[SIZE];
	int oddArr[SIZE];
	int size = 0;

	while (size < 1 || size > 20)
	{
		cout << "Enter how many numbers would you want (between 1 and 20): ";
		cin >> size;
	}

	putNumbersInArray(arr, size);
	segregateEvenOdd(arr, size, evenArr, oddArr);
}