#include <iostream>

int** createMatrix(int row , int col)
{
	int** result = new int*[row];

	for (int i = 0; i < row; i++) {
		result[i] = new int[col];
	}

	return result;
}


void inputMatrix(int** arr, int row, int col)
{
	for (size_t i = 0; i < row; i++) {
		for (size_t j = 0; j < col; j++) {
			std::cin >> arr[i][j];
		}
	}
}

bool isEqual(int** arr1, int** arr2, int row, int col)
{
	for (size_t i = 0; i < row; i++) {
		for (size_t j = 0; j < col; j++) {
			if (arr1[i][j] != arr2[i][j]) {
				return false;
			}
		}
	}
	return true;
}

void freeMemory(int** arr, int row)
{
	for (size_t i = 0; i < row; i++) {
		delete[] arr[i];
	}

	delete[] arr;
}

int main()
{
	int row, col;
	std::cin >> row >> col;
	int** arr1 = createMatrix(row, col);
	int** arr2 = createMatrix(row, col);
	inputMatrix(arr1, row, col);
	inputMatrix(arr2, row, col);
	std::cout << (isEqual(arr1, arr2, row, col)) ? "True" : "False";
	freeMemory(arr1, row);
	freeMemory(arr2, row);

	return 0;
}
