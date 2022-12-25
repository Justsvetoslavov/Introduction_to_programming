#include <iostream>

void swap(int& num1, int& num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

void inputArr(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
}

void printArr(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
}

void bubbleSort(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[i])
			{
				swap(arr[j], arr[i]);
			}
		}
	}
}

int* fun(int* arr1, int* arr2, int size1, int size2)
{
	int* result = new int[size1 + size2];
	for (int i = 0; i < size1; i++)
	{
		result[i] = arr1[i];
	}
	for (int j = 0; j < size2; j++)
	{
		result[j + size1] = arr2[j];
	}
	bubbleSort(result, size1 + size2);
	return result;
}

int main()
{
    int size, size2;
	std::cin >> size >> size2;
	int* arr1 = new int[size];
	int* arr2 = new int[size2];
	inputArr(arr1, size);
	inputArr(arr2, size2);
	bubbleSort(arr1, size);
	bubbleSort(arr2, size2);
	int* arr3 = new int[size + size2];
	arr3 = fun(arr1, arr2, size, size2);
	printArr(arr3, size + size2);


	delete[] arr1;
	delete[] arr2;
	delete[] arr3;



    return 0;
}