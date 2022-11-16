#include <iostream>

using namespace std;

void arrInpur(int *arr, unsigned size);

int search (int *arr, unsigned size, int number);

int main()
{
    int num;
    int arr[5];
    arrInput(arr, 5);
    
    cin >> num;
    cout << search(arr, 5, num);
    
    return 0;
}


void arrInput(int* arr, unsigned size)
{
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
}

int search(int* arr, unsigned size, int number)
{
	for (int i = 0; i < size; i++) {
		if (arr[i] == number) {
			return 1;
		}
	}
	return -1;
}
