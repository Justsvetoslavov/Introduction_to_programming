#include <iostream>

using namespace std;

void fillArray(int* array, int size)
{
    for (int i = 0; i < size; i++)
        cin >> array[i];  
}

//The method only works for arrays with non-repetitive elements
void Intersection(int* array1, int size1, int* array2, int size2)
{
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if(array1[i] == array2[j])
                cout << array1[i] << ' ';
        }
        
    }
    
}

int main()
{
    int size1, size2;
    int array1[100], array2[100];

    cout << "How many elements will the first array have: ";
    cin >> size1;
    fillArray(array1, size1);

    cout << "How many elements will the first array have: ";
    cin >> size2;
    fillArray(array2, size2);

    cout << endl;
    Intersection(array1, size1, array2, size2);
    cout << endl;
}