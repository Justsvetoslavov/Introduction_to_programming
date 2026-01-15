#include <iostream>

bool binarySearch(const int *arr, size_t size, int target)
{
    if (size == 0)
    {
        return false;
    }

    size_t midIndex = size / 2;

    if (arr[midIndex] == target)
    {
        return true;
    }

    if (target < arr[midIndex])
    {
        return binarySearch(arr, midIndex, target);
    }
    else
    {
        return binarySearch(arr + midIndex + 1, size - midIndex - 1, target);
    }
}

int main()
{
    const size_t ARRAY_SIZE = 10;
    int arr[ARRAY_SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::cout << binarySearch(arr, ARRAY_SIZE, 8) << std::endl;
    std::cout << binarySearch(arr, ARRAY_SIZE, 3) << std::endl;
    std::cout << binarySearch(arr, ARRAY_SIZE, 11) << std::endl;
    std::cout << binarySearch(arr, ARRAY_SIZE, 0) << std::endl;
}