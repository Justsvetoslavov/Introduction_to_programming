int linearSearch(const int* arr, size_t length, int x) {
    for(size_t i = 0; i < length; ++i) {
        if(arr[i] == x) {
            return i;
        }
    }

    return -1;
}