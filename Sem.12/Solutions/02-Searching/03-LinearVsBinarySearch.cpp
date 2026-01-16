#include <iostream>
#include <chrono>

int linearSearch(const int* arr, size_t length, int x) {
	for (size_t i = 0; i < length; ++i) {
		if (arr[i] == x) {
			return i;
		}
	}

	return -1;
}

int binarySearch(const int* arr, size_t length, int x) {
	size_t leftIndex = 0, rightIndex = length - 1;

	while (leftIndex <= rightIndex) {
		size_t midIndex = leftIndex + (rightIndex - leftIndex) / 2;

		if (arr[midIndex] == x) {
			return midIndex;
		}
		else if (arr[midIndex] < x) {
			leftIndex = midIndex + 1;
		}
		else {
			rightIndex = midIndex - 1;
		}
	}

	return -1;
}

void measureSearchFunction(
	const int* arr,
	size_t length,
	int x,
	int (*searchFunction)(const int*, size_t, int)
) {
	auto begin = std::chrono::high_resolution_clock::now();
	searchFunction(arr, length, x);
	auto end = std::chrono::high_resolution_clock::now();
	std::cout << "Found in:" << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() << "ns" << std::endl;
}

int main() {
	const size_t ARR_LENGTH = 10000;
	int arr[ARR_LENGTH];
	for (size_t i = 0; i < ARR_LENGTH; i++) {
		arr[i] = i + 1;
	}

	measureSearchFunction(arr, ARR_LENGTH, 30101, binarySearch);
	measureSearchFunction(arr, ARR_LENGTH, 30101, linearSearch);
}