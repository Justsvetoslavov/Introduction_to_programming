#include <iostream>
using namespace std;

void transformMatrix(int** matrix, int size, int** resultMatrix)
{
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			resultMatrix[j][i] = matrix[i][j];
		}
	}

	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			cout << resultMatrix[i][j] << ' ';
		}
		cout << endl;
	}
}

int main()
{
	const int SIZE = 3;
	int matrix[SIZE][SIZE] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9} };

	int resultMatrix[SIZE][SIZE];
	
}

