int upperBoundBinarySearch(const int* arr, size_t length, int target) {
	size_t leftIndex = 0, rightIndex = length - 1;
    int resultIndex = -1; 

	while (leftIndex <= rightIndex) {
        size_t midIndex = leftIndex + (rightIndex - leftIndex) / 2;

		if (arr[midIndex] == target) {
            resultIndex = midIndex;
            leftIndex = midIndex + 1;
		}
		else if (arr[midIndex] < target) {
			leftIndex = midIndex + 1;
		}
		else {
			rightIndex = midIndex - 1;
		}
	}

	return resultIndex;
}