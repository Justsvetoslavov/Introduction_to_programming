#include <iostream>
using namespace std;

const int MAX_SIZE = 20;

int FirstDuplicateInArray(const int *arr, int size)
{
	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++) {
			if (arr[i] == arr[j]) {
				return arr[i];
            }   
		}
	}
	
	return -1;
}

void PutNumbersInArray(int* arr, int size)
{
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

int main()
{
    int arr[MAX_SIZE];
    int size = 0;

    while (size < 2 || size > 20) {
        cout << "Enter how many numbers would you want (between 2 and 20): ";
        cin >> size;
    }    

    PutNumbersInArray(arr, size);
    FirstDuplicateInArray(arr, size);
}
