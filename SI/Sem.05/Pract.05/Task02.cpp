#include <iostream>
using namespace std;
void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
void SortEvenNumsAscending(int* arr, int Size)
{
	for (int i = 0; i < Size; i++)
	{
		for (int j = i + 1; j < Size; j++)
		{
			if (arr[i] % 2 == 0 && arr[i] > arr[j])
			{
				swap(arr[i], arr[j]);
			}
		}
	}
}
void SortOddNumsDescending(int* arr, int Size)
{
	for (int i = 0; i < Size; i++)
	{
		for (int j = i + 1; j < Size; j++)
		{
			if (arr[i] % 2 != 0 && arr[i] < arr[j])
			{
				swap(arr[i], arr[j]);
			}
		}
	}
}
void print(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
			cout << arr[i] << " ";
	}
	cout << endl;
}
int main()
{
	const int Size = 8;
	int arr[Size] = {1, 2, 5, 7, 8, 18, 12, 3};
	for (int i = 0; i < Size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
     SortEvenNumsAscending(arr, Size);
	 SortOddNumsDescending(arr, Size);
	 print(arr, Size);
	return 0;
}