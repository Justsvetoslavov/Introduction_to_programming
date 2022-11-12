#include <iostream>
using namespace std;

const int SIZE = 20;

void findRepeatingNumber(const int* arr, int size)
{
    for (int i = 1; i < size; i++)
        for (int j = i - 1; j >= 0; j--)
            if (arr[i] == arr[j])
            {
                cout << "First repeating number is " << arr[i];

                return;
            }

    cout << "There was no number that was repeating";
}

void putNumbersInArray(int* arr, int size)
{
    for (int i = 0; i < size; i++)
        cin >> arr[i];
}

int main()
{
    int arr[SIZE];
    int size = 0;

    while (size < 2 || size > 20)
    {
        cout << "Enter how many numbers would you want (between 2 and 20): ";
        cin >> size;
    }    

    putNumbersInArray(arr, size);
    findRepeatingNumber(arr, size);
}