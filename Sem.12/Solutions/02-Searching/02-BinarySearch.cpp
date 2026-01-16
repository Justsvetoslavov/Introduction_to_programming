int binarySearch(const int* arr, size_t length, int target) {
	size_t leftIndex = 0, rightIndex = length - 1;

	while (leftIndex <= rightIndex) {
		// int midIndex = (leftIndex + rightIndex) / 2;
        // Why the following is better?
        size_t midIndex = leftIndex + (rightIndex - leftIndex) / 2;

		if (arr[midIndex] == target) {
			return midIndex;
		}
		else if (arr[midIndex] < target) {
			leftIndex = midIndex + 1;
		}
		else {
			rightIndex = midIndex - 1;
		}
	}

	return -1;
}