#include <iostream>

void PrintArray(int arr[], int size) {
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
}

void SordDescending(int arr[], int size) 
{
	for (int i = 0; i < (size - 1); ++i)
	{
		for (int j = 0; j < size - 1 - i; ++j)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
void SordAscending(int arr[], int size)
{
	for (int i = 0; i < (size - 1); ++i)
	{
		for (int j = 0; j < size - 1 - i; ++j)
		{
			if (arr[j] < arr[j + 1])
			{
				int temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}


int main()
{
	int arr[] = { 0, 8, 7, 6, 4, 3, 9, 7, 8, 6 };

	int sortedArr[10];

	int oddArr[10];
	int evenArr[10];

	int oddIndex = 0;
	int evenIndex = 0;

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 0)
		{
			evenArr[evenIndex] = arr[i];
			evenIndex++;
		}
		else
		{
			oddArr[oddIndex] = arr[i];
			oddIndex++;
		}
	}

	SordAscending(oddArr, (oddIndex));
	SordDescending(evenArr, (evenIndex));

	for (int i = 0; i < evenIndex; i++)
	{
		sortedArr[i] = evenArr[i];
	}
	for (int i = 0; i < oddIndex; i++)
	{
		sortedArr[i + evenIndex ] = oddArr[i];
	}
	PrintArray(sortedArr, 10);
}
