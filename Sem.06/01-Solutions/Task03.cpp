#include <iostream>

void Swap(int& first, int& second) {
    int temp = first;
    first = second;
    second = temp;
}

// Swaps the i-th element from the start with the i-th element from the end
void ReverseArray(int* arr, int size) {
    for (int i = 0; i < size / 2; ++i) {
        Swap(arr[i], arr[size - 1 - i]);
    }
}

void PrintArray(const int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    const int Size = 5;
    int arr[Size] = {1, 2, 3, 4, 5};

    ReverseArray(arr, Size);
    PrintArray(arr, Size); // 5 4 3 2 1

    return 0;
}
