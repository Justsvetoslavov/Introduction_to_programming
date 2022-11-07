#include <iostream>
using namespace std;
int  repeatNumber(int* arr, int lenght)
{
	for (int i = 0; i < lenght-1; i++)
	{
		for (int j = i + 1; j < lenght; j++)
		{
			if (arr[i] == arr[j])
			{
				return arr[i];
			}
		}
	}
	return -1;
}
int main()
{
	int arr[] = {1, 5, 8, 7, 7};
	int lenght = 5;
	cout << repeatNumber(arr, lenght);
	return 0;
}