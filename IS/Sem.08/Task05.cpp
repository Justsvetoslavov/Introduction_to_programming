#include <iostream>

void inputArr(int* arr, int size)
{
	for (int i = 1; i < size; i++)
	{
		std::cin >> arr[i];
	}
}

int** matrix(int row)
{
	int** result = new int* [row];
	int col;
	for (int i = 0; i < row; i++)
	{
		std::cin >> col;
		result[i] = new int[col];
		result[i][0] = col;
		inputArr(result[i], col);
	}
	return result;
}

int** action(int** arr, int row)
{
	int** result = new int* [row / 2];
	for (int i = 0; i < row / 2; i++)
	{
		int newCols = arr[i][0] + arr[row - i - 1][0];
		result[i] = new int[newCols];
		for (int j = 0; j < arr[i][0]; j++)
		{
			result[i][j] = arr[i][j];
		}
		for (int y = 0; y < arr[row - 1 - i][0]; y++)
		{
			result[i][y + arr[i][0]] = arr[row - 1 - i][y];
		}
	}
	return result;
}


void printArr(int** arr, int row)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < arr[i][0] + arr[i][arr[i][0]]; j++)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

void printArrOdd(int** arr, int row)
{
	for (int i = 0; i < arr[row][0]; i++)
	{
		std::cout << arr[row][i] << " ";
	}
	std::cout << std::endl;
}

void freeMemory(int** arr, int row)
{
	for (int i = 0; i < row; i++)
	{
		delete[] arr[i];
	}

	delete[] arr;
}

int main()
{
    int row;
	std::cin >> row;
	int** arr = matrix(row);
	int** result = action(arr, row);
	if (row % 2 == 0)
	{
		printArr(result, row / 2);
	}
	else
	{
		printArr(result, row / 2);
		printArrOdd(arr, row / 2);
	}

	freeMemory(arr, row);
	freeMemory(result, row / 2);


    return 0;
}