#include <iostream>
using namespace std;

void sortArray(int* arr, int size)
{
	for (int i = 0; i < size - 1; ++i)
	{
		if (i % 2 != 0)
		{
			if (arr[i] > arr[i + 1])
			{
				int temp = arr[i + 1];
				arr[i + 1] = arr[i];
				arr[i] = temp;
			}
		}
		else
		{
			if (arr[i] < arr[i + 1])
			{
				int temp = arr[i + 1];
				arr[i + 1] = arr[i];
				arr[i] = temp;
			}
		}
	}

	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << ' ';
	}
}

int main()
{
	int arr[] = {1, 5, 7, 6, 2, 4}; // 5 1 7 2 6 4
	sortArray(arr, 6);
}

