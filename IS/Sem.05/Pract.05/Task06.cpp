#include <iostream>
using namespace std;
void arrInput(int *arr, unsigned size);
void swap(int &num1, int &num2);
void sort(int *arr, unsigned size);
void arrOutput(int *arr, unsigned size);

int main()
{
    int arr[5];
    arrInput(arr, 5);
    sort(arr, 5);
    arrOutput(arr, 5);
    return 0;
}

void arrInput(int *arr, unsigned size)
{
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void swap(int &num1, int &num2)
{
    int num3 = num2;
    num2 = num1;
    num1 = num3;
}

void sort(int *arr, unsigned size)
{
    for(int i = 0; i < size - 1; i++)
    {
        if(i % 2 == 0)
        {
            if(arr[i] < arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
            }
        }
        else
        {
            if(arr[i] > arr[i+1])
            {
                swap(arr[i], arr[i + 1]);
            }
        }
    }
}

void arrOutput(int *arr, unsigned size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
