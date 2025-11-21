#include <iostream>

void InputArray(int *arr,const int size) {
	for (int i = 0; i < size; ++i) {
		std::cin >> arr[i];
	}
}

void PrintArray(const int *arr, int size) {
	for (int i = 0; i < size; ++i) {
		std::cout << arr[i] << std::endl;
    }
}