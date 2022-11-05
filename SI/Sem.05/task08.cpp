#include <iostream>

void Multiply(int arr1[][2], int arr2[][4], int multiplArr[3][4]) {
    //arr1 rows
    for (int i = 0; i < 3; i++)
    {
        //arr2 cols
        for (int j = 0; j < 4; j++)
        {
            //arr1 cols
            for (int l = 0; l < 2; l++)
            {
                multiplArr[i][j] += arr1[i][l] * arr2[l][j];
            }
        }
    }
}

void PrintMatrix(int arr[][4], int rows) {
    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            std::cout << arr[row][col] << " ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    const int n = 3, m = 2, k = 4;

    int arr1[n][m] = { {1, 2},{3,4}, {5,6} };
    int arr2[m][k] = { {1, 2, 3, 4}, {5, 6,7,8} };

    int multiplArr[n][k] ={};
    Multiply(arr1, arr2, multiplArr);
    PrintMatrix(multiplArr, 3);
}