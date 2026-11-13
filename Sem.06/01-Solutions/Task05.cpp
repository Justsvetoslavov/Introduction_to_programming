#include <iostream>

// Iterative binary search in an array sorted in ascending order.
// Returns the index of x, or -1 if it is not present.
// left and right are the bounds of the part of the array that may still contain x.
int BinarySearch(const int* arr, int size, int x) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        // Same as (left + right) / 2, but left + right cannot overflow
        int mid = left + (right - left) / 2;

        if (arr[mid] == x) {
            return mid;
        } else if (arr[mid] < x) {
            left = mid + 1; // x can only be in the right half
        } else {
            right = mid - 1; // x can only be in the left half
        }
    }

    return -1;
}

int main() {
    const int Size = 7;
    int arr[Size] = {1, 3, 5, 7, 9, 11, 13};

    std::cout << BinarySearch(arr, Size, 9) << std::endl; // 4
    std::cout << BinarySearch(arr, Size, 4) << std::endl; // -1

    return 0;
}
