void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int* arr, size_t size) {
    for (size_t i = 0; i < size; i++) {
        bool swapped = false;
        for(size_t j = 0; j < size - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if(!swapped) {
            break;
        }
    }
}

void evenMoreOptimizedBubbleSort(int* arr, size_t size) {
	int lastSwappedIndex = size - 1;
	for (size_t i = 0; i < size; i++) {
		int currentSwappedIndex = -1;
		for (size_t j = 0; j < lastSwappedIndex; j++) {
			if (arr[j] > arr[j + 1]) {
				currentSwappedIndex = j;
				swap(arr[j], arr[j + 1]);
			}
		}

		if (currentSwappedIndex == -1) {
			return;
		}
		lastSwappedIndex = currentSwappedIndex;
	}
}