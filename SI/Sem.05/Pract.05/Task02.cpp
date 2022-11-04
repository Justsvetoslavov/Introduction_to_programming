#include <iostream>

using namespace std;

void print(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

void fill(int* array, int size)
{
    for (int i = 0; i < size; i++)
    {
        int currentNum;
        cin >> currentNum;
        array[i] = currentNum;
    }
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int* numbers, int size)
{
    for (int i = 0; i < size-1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if(numbers[i] > numbers[j])
            {
                swap(numbers[i], numbers[j]);
            }
        }
    }
}

void SplitSort(int* numbers, int size)
{
    bubbleSort(numbers, size);

    int even[100], odd[100];
    int evenSize = 0, oddSize = 0;
    for (int i = 0; i < size; i++)
    {
        if(numbers[i] % 2 == 0)
            even[evenSize++] = numbers[i];
        else
            odd[oddSize++] = numbers[i];
    }

    //Reverse odd numbers
    for (int i = 0; i < oddSize/2; i++)
    {
        swap(odd[i], odd[oddSize - i - 1]);
    }

    print(even, evenSize);
    print(odd, oddSize);
}

int main()
{
    int numbers[100];
    int N;
    cout << "How many numbers will you enter: ";
    cin >> N;

    cout << endl;
    fill(numbers, N);
    cout << endl;

    SplitSort(numbers, N);
}