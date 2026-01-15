#include <iostream>

void printSubset(const int* arr, size_t arrSize, const bool* includedArray) {
	for (size_t i = 0; i < arrSize; i++) {
		if (includedArray[i]) {
			std::cout << arr[i] << " ";
		}
	}

	std::cout << std::endl;
}

void printAllSubsets(const int* arr, size_t arrSize, size_t currentPosition, bool* includedArray) {
	if (currentPosition == arrSize) {
		printSubset(arr, arrSize, includedArray);
		return;
	}

	includedArray[currentPosition] = 0;
	printAllSubsets(arr, arrSize, currentPosition + 1, includedArray);
	includedArray[currentPosition] = 1;
	printAllSubsets(arr, arrSize, currentPosition + 1, includedArray);
}

int main() {
	const size_t ARR_SIZE = 5;
	int arr[ARR_SIZE] = {1, 2, 3, 4, 5};
	bool includedArray[ARR_SIZE] = {};
	size_t currentPosition = 0;

	printAllSubsets(arr, ARR_SIZE, currentPosition, includedArray);
}