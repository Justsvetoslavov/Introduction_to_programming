#include <iostream>
using namespace std;
void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
int SortArrayAscending(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				swap(arr[i], arr[j]);
			}
		}
	}
	return arr[size];
}
void printSection(int* arr1, int* arr2, int size1, int size2)
{
	SortArrayAscending(arr1, size1);
	SortArrayAscending(arr2, size2);
	for (int i = 0, j = 0; i < size1 && j < size2; ) 
	{
			if (arr1[i] == arr2[j])
			{
				cout << arr1[i] << " ";
				i++;
				j++;
			}
			else if (arr1[i] < arr2[j])
			{
				i++;
			}
			else if (arr1[i] > arr2[j])
			{
				j++;
			}
	} 
}
int main()
{
	const int Size1 = 5;
	const int Size2 = 4;
	int arr1[Size1] = { 2, 5, 6, 14, 9 };
	int arr2[Size2] = { 4, 2, 5, 14 };
	printSection(arr1, arr2, Size1, Size2);
	return 0;
}