#include <iostream>
using namespace std;
void inputArray(int* arr, int size)
{
	for (int i = 0; i < size; i++) 
	{
	cin >> arr[i];
	}
}
int checkUniqueNumber(const int* arr, int size)                 
{
	int uniqueNum = 0;
	for (int i = 0; i < size; i++)
	{
	  uniqueNum ^= arr[i];
	}
	return uniqueNum;
}
int main()
{
	const int SIZE = 7;
	int arr[SIZE];
	cout << "Enter seven numbers: ";
	inputArray(arr, SIZE);
	cout << checkUniqueNumber(arr, SIZE);
	return 0;
}