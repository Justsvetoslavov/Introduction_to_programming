#include <iostream>

void printMatrix(int a[25][25], int row, int column) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column; j++) {
            std::cout << a[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void initializeMatrix(int a[25][25], int row, int column) {
    std::cout << "Please fill in your matrix" << std::endl;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column; j++){
        std::cin >> a[i][j];
    }
    }
}

void multiplyAndPrint(int a[25][25], int b[25][25], int rowA, int colA_rowB, int colB) {
    int multiplied[rowA][colB];
    for (int i = 0; i < rowA; i++)
    {
        for (int j = 0; j < colB; j++)
        {
            multiplied[i][j] = 0;
            for (int k = 0; k < colA_rowB; k++)
            {
                multiplied[i][j] += (a[i][k] * b[k][j]);
            }
        }
    }
    std::cout << "A x B:" << std::endl;
    printMatrix((int(*)[25])multiplied, rowA, colB);
}

int main()
{
    const int ROW_A = 2, COL_A_ROW_B = 2, COL_B = 2;
    int a[ROW_A][COL_A_ROW_B];
    int b[COL_A_ROW_B][COL_B];

    initializeMatrix((int(*)[25])a, ROW_A, COL_A_ROW_B);
    initializeMatrix((int(*)[25])b, COL_A_ROW_B, COL_B);

    std::cout << "Matrix A: " << std::endl;
    printMatrix((int(*)[25])a, ROW_A, COL_A_ROW_B);

    std::cout << std::endl;

    std::cout << "Matrix B: " << std::endl;
    printMatrix((int(*)[25])b, COL_A_ROW_B, COL_B);

    std::cout << std::endl;
    multiplyAndPrint((int(*)[25])a, (int(*)[25])b, ROW_A, COL_A_ROW_B, COL_B);
}