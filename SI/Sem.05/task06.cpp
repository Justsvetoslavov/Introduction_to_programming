#include <iostream>

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void PrintArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6};

    for (int i = 1; i < 6; i++)
    {
        if (i % 2 == 0 && arr[i] < arr[i - 1])
        {
            swap(arr[i], arr[i - 1]);
        }
        else if (i % 2 == 1 && arr[i] > arr[i - 1])
        {
            swap(arr[i], arr[i - 1]);
        }
    }

    PrintArray(arr, 6);
}