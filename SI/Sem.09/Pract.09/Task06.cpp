#include <iostream>

void swap(int& first, int& second) {
    first = first + second;
    second = first - second;
    first = first - second;
}

void insertInt(int* arr, int len) {
    if (arr[len - 1] >= arr[len - 2]) {
        return;
    }
    swap(arr[len - 1], arr[len - 2]);
    insertInt(arr, len - 1);
}

void print(int* arr, int len) {
    for (int i = 0; i < len; i++) {
        std::cout << arr[i] << " ";
    }
}
