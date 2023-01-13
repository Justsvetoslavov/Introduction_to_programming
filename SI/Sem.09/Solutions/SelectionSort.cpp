void selectionSort(int* arr, unsigned size) {
    for (unsigned i = 0; i < size - 1; ++i) {
        int min = arr[i];
        int minIndex = i;
 
        for (unsigned j = i + 1; j < size; ++j) {
            if (arr[j] < min) {
                min = arr[j];
                minIndex = j;
            }
        }
 
        if (minIndex != i) {
            std::swap(arr[i], arr[minIndex]);
        }
    }
}