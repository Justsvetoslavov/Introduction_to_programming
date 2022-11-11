#include <iostream>
using namespace std;
void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
void sort(int* arr, int size)
{
	for (int i = 0; i < size-1; i++)
	{
		if (i % 2 == 0 && arr[i] < arr[i+1])
		{
			swap(arr[i], arr[i + 1]);
		}
		else if (i % 2 != 0 && arr[i] > arr[i + 1])
		{
			swap(arr[i], arr[i + 1]);
		}
    }
}
void printArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
int main()
{
	const int Size = 6;
	int arr[Size] = { 2, 6, 7, 88, 1, 20 };
	sort(arr, Size);
	printArray(arr, Size);
	return 0;
}