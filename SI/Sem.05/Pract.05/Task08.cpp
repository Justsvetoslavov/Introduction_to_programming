#include <iostream>
void MultiplyMatrixs(int matrixA[][3], int matrixB[][4], int matrixRezult[][4], int N, int M, int K);

int main()
{
	const int N = 2;
	const int M = 3;
	const int K = 4;
	int matrixA[N][M]{ {1,2,3}, {4,5,6} };
	int matrixB[M][K]{ {5,7,3,4}, {7,5,6,6},{1,2,5,3} };
	int rezult[N][K]; 
	MultiplyMatrixs(matrixA,matrixB,rezult, N,M,K);
	
	//print
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < K; j++)
		{
			std::cout << rezult[i][j]<<" ";
		}
		std::cout << std::endl;
	}
}
//how to set M and K here???
void MultiplyMatrixs(int matrixA[][3], int matrixB[][4], int matrixRezult[][4], int N, int M, int K)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < K; j++)
		{
			int currElement = 0;
			for (int l = 0; l < M; l++)
			{
				currElement += matrixA[i][l] * matrixB[l][j];
			}
			matrixRezult[i][j] = currElement;
		}
	}
}

