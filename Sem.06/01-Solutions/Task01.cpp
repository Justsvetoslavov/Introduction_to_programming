#include <iostream>

// Input: size (1 <= size <= 100), followed by size integers
const int MaxSize = 100;

void InputArray(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
}

void PrintArray(const int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[MaxSize];
    int size;
    std::cin >> size;

    InputArray(arr, size);
    PrintArray(arr, size);

    return 0;
}
