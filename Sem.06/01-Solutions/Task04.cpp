#include <iostream>

void Swap(int& first, int& second) {
    int temp = first;
    first = second;
    second = temp;
}

// After pass i, the largest i + 1 elements are in their final places at the end
void BubbleSort(int* arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        bool swapped = false;

        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                Swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // No swaps in a whole pass means the array is already sorted
        if (!swapped) {
            break;
        }
    }
}

void PrintArray(const int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[] = {4, 1, 5, 2, 3};
    // Works only here, where arr is still an array and not a pointer
    int size = sizeof(arr) / sizeof(arr[0]);

    BubbleSort(arr, size);
    PrintArray(arr, size); // 1 2 3 4 5

    return 0;
}
