#include <iostream>

// Returns the index of the first occurrence of number, or -1 if it is not present
int LinearSearch(const int* arr, int size, int number) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == number) {
            return i;
        }
    }

    return -1;
}

int main() {
    const int Size = 5;
    int arr[Size] = {7, 3, 9, 3, 1};

    std::cout << LinearSearch(arr, Size, 3) << std::endl; // 1
    std::cout << LinearSearch(arr, Size, 5) << std::endl; // -1

    return 0;
}
