#include <iostream>

void mySwap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void printArr(const int *arr, size_t arrSize)
{
    for (size_t i = 0; i < arrSize; i++)
    {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;
}

void printPermutations(int *arr, size_t arrSize, size_t currentPosition)
{
    if (currentPosition == arrSize)
    {
        printArr(arr, arrSize);
        return;
    }

    for (size_t i = currentPosition; i < arrSize; i++)
    {
        mySwap(arr[currentPosition], arr[i]);
        printPermutations(arr, arrSize, currentPosition + 1);
        mySwap(arr[currentPosition], arr[i]);
    }
}

int main()
{
    const size_t ARR_SIZE = 5;
    int arr[ARR_SIZE] = {1, 2, 3, 4, 5};
    size_t currentPosition = 0;

    printPermutations(arr, ARR_SIZE, currentPosition);
}