void insertionSort(int* arr, size_t size) {
    for (int i = 1; i < size; i++) {
        int currentElement = arr[i];
        int currentIndex = i - 1;
        while (currentIndex >= 0 && arr[currentIndex] > currentElement) {
            arr[currentIndex + 1] = arr[currentIndex];
            currentIndex--;
        }

        arr[currentIndex + 1] = currentElement;
    }
}