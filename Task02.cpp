#include <iostream>

void initializeArray(int a[], int size)
{
    std::cout << "Please enter your numbers: " << std::endl;
    for (int i = 0; i < size; i++)
    {
        std::cin >> a[i];
    }
}

void swapElements(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void printArray(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
}

void bubbleSortAscending(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (a[i] > a[j])
                swapElements(a[i], a[j]);
        }
    }
}

void bubbleSortDescending(int a[], int size, int startingPoint)
{
    for (int i = startingPoint; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (a[i] < a[j])
                swapElements(a[i], a[j]);
        }
    }
}

void reorganizeArray(int a[], int size)
{
    int counter = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] % 2 != 0)
            counter++;
    }

    const int ODD_AMOUNT = counter;
    const int EVEN_AMOUNT = size - ODD_AMOUNT;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = (i + 1); j < size; j++)
        {
            if (a[i] % 2 != 0 && a[j] % 2 == 0)
                swapElements(a[i], a[j]);
        }
    }
    bubbleSortAscending(a, EVEN_AMOUNT);
    bubbleSortDescending(a, size, EVEN_AMOUNT);
}

int main()
{
    const int SIZE = 9;
    int numbers[SIZE];
    initializeArray(numbers, SIZE);
    printArray(numbers, SIZE);
    reorganizeArray(numbers, SIZE);
    printArray(numbers, SIZE);
    return 0;
}