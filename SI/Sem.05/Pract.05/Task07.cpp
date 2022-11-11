#include <iostream>
void Transponate(int matrix[][3], int rows, int cols);
int main()
{
	const int rows = 3;
	const int cols = 3;
	int matrix[rows][cols]{ {1,2,3}, {4,5,6}, {7,8,9} };

	Transponate(matrix, rows, cols);

	//print
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}

}
//how to pass correctly a matrix as a parameter
void Transponate(int matrix[][3], int rows, int cols)
{
	for (int i = 0; i < rows - 1; i++)
	{
		for (int j = i + 1; j < cols; j++)
		{
			int tmp = matrix[i][j];
			matrix[i][j] = matrix[j][i];
			matrix[j][i] = tmp;
		}
	}
}
