#include <iostream>

int powerOfTwo(int exp)
{
	return (1 << exp);
}

void getSubNumber(const int* arr, int size, int mask)
{
	for (int i = 0; i < size; i++)
	{
		if (mask & 1) {
			std::cout << arr[i] << " ";
		}
		mask >>= 1;
	}  
}

void printSubNumbers(const int* arr, int size)
{
	int length = powerOfTwo(SIZE);
	for (int i = 0; i < length; i++) {
		std::cout << "[ ";
		getSubNumber(arr, size, i);
		std::cout << "]"<< " ";
	}
}
