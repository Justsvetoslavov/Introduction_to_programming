#include <iostream>
using namespace std;
void inputArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}
int powerOfTwo(int exp)
{
	return (1 << exp);
}
  void getSubNumber(const int* arr, int size, int mask)
  {
	 for (int i = 0; i < size; i++)
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
	const int SIZE = 3;
	int arr[SIZE];
	inputArray(arr, SIZE);
	int power = powerOfTwo(SIZE);
	for (int i = 0; i < power; i++)
	{
		cout << "[ ";
		getSubNumber(arr, SIZE, i);
		cout << "]"<< " ";
	}
	return 0;
}