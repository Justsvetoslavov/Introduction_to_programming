#include <iostream>
using namespace std;
void arrInput(int *arr, unsigned size);
void arrCut(int *arr1, int *arr2, unsigned size1, unsigned size2);
int main()
{
    int arr1[5];
    int arr2[5];
    arrInput(arr1, 5);
    arrInput(arr2, 5);
    arrCut(arr1, arr2, 5, 5);

    return 0;
}

void arrInput(int *arr, unsigned size)
{
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void arrCut(int *arr1, int *arr2, unsigned size1, unsigned size2)
{
    for(int i = 0; i < size1; i++)
    {
        for(int j = 0; j < size1; j++)
        {
            if(arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
            }   
        }   
    }
     cout << endl;
}