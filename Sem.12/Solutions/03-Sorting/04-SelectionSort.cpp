void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void selectionSort(int* arr, size_t size) {
    for (size_t i = 0; i < size - 1; i++) {
        size_t minIndex = i;
        for (size_t j = i + 1; j < size; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        
        if(minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }
}