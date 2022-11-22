#include <iostream>
using namespace std;
const int SIZE = 7;
void inputArray(int* arr)
{
	for (int i = 0; i < SIZE; i++) 
	{
	cin >> arr[i];
	}
}
int checkUniqueNumber(int* arr)                 
{
	int uniqueNum = 0;
	for (int i = 0; i < SIZE; i++)
	{
	  uniqueNum ^= arr[i];
	}
	return uniqueNum;
}
int main()
{
	int arr[SIZE];
	cout << "Enter seven numbers: ";
	inputArray(arr);
	cout << checkUniqueNumber(arr);
	return 0;
}