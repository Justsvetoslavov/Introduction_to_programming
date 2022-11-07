#include <iostream>

using namespace std;

void fillArray(int* array, int size)
{
    for (int i = 0; i < size; i++)
        cin >> array[i];  
}

void swap(int &a, int &b)
{
    int temp = b;
    b = a;
    a = temp;
}

void reverseBubbleSort(int* array, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if(array[i] < array[j])
                swap(array[i], array[j]);
        }
    }
}

void print(int* array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << ' ';
    }
    cout << endl;
}

void taskOrder(int* array, int size)
{
    reverseBubbleSort(array, size);
    for (int i = 1; i < size - 1; i+=2)
        swap(array[i], array[i+1]);    
}

int main()
{
    int n;
    int numbers[100];
    
    cout << "How many numbers will you enter: ";
    cin >> n;

    fillArray(numbers, n);

    taskOrder(numbers, n);
    print(numbers, n);
}