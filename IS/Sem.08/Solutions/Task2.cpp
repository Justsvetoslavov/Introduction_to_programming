#include <iostream>

int** CreateMatrix(size_t rows, size_t columns)
{
	int** matrix = new int*[rows];

	for (size_t i = 0; i < rows; i++) {
		matrix[i] = new int[columns];
    }

	for (size_t i = 0; i < rows; i++) {
		for (size_t y = 0; y < columns; y++) {
			matrix[i][y] = NULL; //default initialization
        }
     } 

	return matrix;
}

void Initialize(int** matrix, size_t rows, size_t columns)
{
	for (size_t i = 0; i < rows; i++) {
		for (size_t y = 0; y < columns; y++) {
            std::cin >> matrix[i][y];
        }
    }
}
void Print(int** matrix, size_t rows, size_t columns)
{
	for (size_t i = 0; i < rows; i++) {
		for (size_t y = 0; y < columns; y++) {
			std::cout << matrix[i][y] << " ";
		}
		std::cout << std::endl;
	}
}

void Free(int** matrix, size_t rows)
{
	for (size_t i = 0; i < rows; i++) {
		delete[] matrix[i];
    }

	delete[] matrix;
}