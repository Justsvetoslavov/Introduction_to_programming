#include <iostream>

void inputArr(int* arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
}

int theBiggetNum(const int* arr, int size, int result = -1)
{
	if (result != -1 || size == 1)
	{
		return result;
	}
	if ((arr[size - 1] + arr[size + 1]) / 2 < arr[size])
	{
		return theBiggetNum(arr, size - 1, arr[size]);
	}
	else 
	{
		return theBiggetNum(arr, size - 1);
	}
}

int main()
{
	unsigned int n;
	std::cin >> n;
	int* arr = new int[n];
	inputArr(arr, n);
	std::cout << theBiggetNum(arr, n - 2);
	delete[] arr;
	return 0;
}