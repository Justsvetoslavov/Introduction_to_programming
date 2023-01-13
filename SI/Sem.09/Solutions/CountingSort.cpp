void CountingSort(int* arr, unsigned size, int max) {
    int* res = new int[max+1];
    for (int i = 0; i <= max; i++) {
        res[i] = 0;
    }
    
    for (unsigned i = 0; i < size; i++) {
        res[arr[i]]++;
    }
 
    for (int i = 1; i <= max; i++) {
        res[i] += res[i - 1];
    }
 
    int* temp = new int[size];
    for (unsigned i = size - 1; i >= 0; i--) {
        int num = arr[i];
        int index = res[num] - 1;
        temp[index] = num;
        res[num]--;
    }
 
    for (unsigned i = 0; i < size; ++i) {
        arr[i] = temp[i];
    }

    delete[] res;
    delete[] temp;
}
 