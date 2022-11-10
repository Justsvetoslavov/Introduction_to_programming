#include <iostream>
using namespace std;
const int N = 4;
 void printMatrix(int matrix[][N])
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}
int swapVariables(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
	return a, b;
}
void transposeMatrix(int matrix[][N])
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < i; j++)
		{
			swapVariables(matrix[i][j], matrix[j][i]); 
		}
	}
}
int main()
{
	int matrix[][N] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 };
	printMatrix(matrix);
	cout << "Transpose matrix:"<<endl;
	transposeMatrix(matrix);
	printMatrix(matrix);
	return 0;
}