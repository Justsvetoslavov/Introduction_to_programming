#include <iostream>

void initializeArray(int a[], int size)
{
    std::cout << "Please enter your numbers for the array: " << std::endl;
    for (int i = 0; i < size; i++)
    {
        std::cin >> a[i];
    }
}

void printOutCommons(int a[], int aSize, int b[], int bSize)
{
    for (int i = 0; i < aSize; i++)
    {
        for (int j = 0; j < bSize; j++)
        {
            if (a[i] == b[j])
                std::cout << a[i] << " ";
        }
    }
    std::cout << std::endl;
}

int main()
{
    int n, m;
    const int SIZE_1 = 4;
    const int SIZE_2 = 3;
    int array1[SIZE_1];
    int array2[SIZE_2];
    initializeArray(array1, SIZE_1);
    std::cout << std::endl;
    initializeArray(array2, SIZE_2);
    printOutCommons(array1, SIZE_1, array2, SIZE_2);
    return 0;
}