#include <iostream>
using namespace std;
const int Rows1 = 3;                    
const int Columns1 = 4;
const int Columns2 = 2;
void multiplicationOfTwoMatrix(int A[][Columns1], int B[][Columns2], int resultMatrix[][Columns2])
{
	for (int i = 0; i < Rows1; i++)
	{
		for (int j = 0; j < Columns2; j++)
		{
			resultMatrix[i][j] = 0;
			for (int k = 0; k < Columns1; k++)
			{
				resultMatrix[i][j] += A[i][k] * B[k][j];
			}
		}
	}
}
void printMatrix(int matrix[][Columns2], int rows, int columns)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}
int main()
{
    int matrix1[][Columns1] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int matrix2[][Columns2] = { 1, 2, 3, 4, 5, 10, -2, 3 };
	int resultMatrix[Rows1][Columns2];
	multiplicationOfTwoMatrix(matrix1, matrix2, resultMatrix);
	printMatrix(resultMatrix, Rows1, Columns2);
    return 0;
}