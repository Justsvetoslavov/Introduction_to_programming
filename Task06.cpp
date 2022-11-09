#include <iostream>

void initializeArray(int a[], int size) { 
    std::cout << "Please fill in your array:" << std::endl;
    for(int i = 0; i < size; i++) {
        std::cin >> a[i];
    }
}

void swapElements(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int a[], int size)
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

void printArray(int a[], int size) {
    for(int i = 0; i < size; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
}

void turnArrayIntoASaw(int a[], int size) {
    bubbleSort(a, size);
    for(int i = 1; i < size; i+= 2) swapElements(a[i-1], a[i]);
}

int main() {
    const int SIZE = 6;
    int arr[SIZE];
    initializeArray(arr, SIZE);
    printArray(arr, SIZE);
    turnArrayIntoASaw(arr, SIZE);
    printArray(arr, SIZE);
    return 0;
}