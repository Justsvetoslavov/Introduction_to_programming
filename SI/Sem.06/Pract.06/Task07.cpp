#include <iostream>
using namespace std;
const int SIZE = 3;
void inputArray(int* arr)
{
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
}
int powerOfTwo(int exp)
{
	return (1 << exp);
}
  void getSubNumber(int* arr, int mask)
  {
	 for (int i = 0; i < SIZE; i++)
	  {
		 if (mask & 1)
		 {
			 cout << arr[i] << " ";
		 }
		 mask >>= 1;
	  }  
  }
int main()
{
	int arr[SIZE];
	inputArray(arr);
	int power = powerOfTwo(SIZE);
	for (int i = 0; i < power; i++)
	{
		cout << "[ ";
		getSubNumber(arr, i);
		cout << "]"<< " ";
	}
	return 0;
}