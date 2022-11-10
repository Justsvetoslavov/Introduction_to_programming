#include <iostream>
using namespace std;

void multiplyMatrix(int **firstMatrix, int **secondMatrix, int **resultMatrix, int size)
{
	int resultArr[3][3];
	int sum = 0;
	int firstEl = 0;
	int secondEl = 0;

	for (int row = 0; row < 3; row++)
	{
		for (int col = 0; col < 3; col++)
		{
			for (int j = 0; j < 3; j++)
			{
				firstEl = firstMatrix[row][col];
				secondEl = secondMatrix[j][col];

				sum += firstEl * secondEl;
			}
			resultArr[row][col] = sum;
			sum = 0;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << resultArr[i][j] << ' ';
		}

		cout << endl;
	}
}

int main()
{
	int firstArr[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
	int secondArr[3][3] = { {1, 2, 2}, {3, 2, 4}, {1, 1, 2} };
	int resultArr[3][3] = {};

	multiplyMatrix((int**)firstArr, (int**)secondArr, (int**)resultArr, 3);
}
