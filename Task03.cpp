#include <iostream>

int findArraySize(int number)
{
    int i = 0;
    while (number > 0)
    {
        number /= 2;
        i++;
    }
    return i;
}

void initializeBinaryArray(int a[], int size, int number)
{
    for (int i = size - 1; i >= 0; i--)
    {
        a[i] = number % 2;
        number /= 2;
    }
}

void printArray(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << a[i];
    }
    std::cout << std::endl;
}

int main()
{
    int number;
    std::cout << "Please enter your number: " << std::endl;
    std::cin >> number;
    if (number <= 0) {
        std::cout << "Invalid input!" << std::endl;
        return 0;
    }
    else
    {
        const int SIZE = findArraySize(number);
        int binaryArray[SIZE];
        initializeBinaryArray(binaryArray, SIZE, number);
        printArray(binaryArray, SIZE);
        return 0;
    }
}