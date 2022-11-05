#include <iostream>

void PrintMatrix(int arr[][3], int rows) {
    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            std::cout << arr[row][col] << " ";
        }
        std::cout << std::endl;
    }
}

void transp(int arr[][3], int newArr[][3], int rows) {

    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            newArr[col][row] = arr[row][col];
        }
    }
}

int main()
{
    int arr[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
    int newArr[3][3];

    transp(arr, newArr, 3);
    PrintMatrix(newArr, 3);
}
