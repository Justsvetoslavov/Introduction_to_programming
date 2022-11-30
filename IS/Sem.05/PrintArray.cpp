#include <iostream>

void printArray(const int* arr, int size)
{
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << std::endl;
    }
}