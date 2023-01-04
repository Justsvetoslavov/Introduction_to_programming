#include <iostream>
const int MAX_SIZE = 20;
void addElement(int* array, int toAdd, int len)
{
	if (len == 0 || toAdd > array[len - 1])
	{
		array[len] = toAdd;
		return;
	}
	array[len] = array[len - 1];
	addElement(array, toAdd, len - 1);
}

int main()
{
	int arr[MAX_SIZE] = { 1,2,3,4,5,7,8,9,10 };
	int toAdd = 6;
	addElement(arr, toAdd, 8);
	for (int i = 0; i < 10; i++)
	{
		std::cout << arr[i] << " ";
	}
	return 0;
}
