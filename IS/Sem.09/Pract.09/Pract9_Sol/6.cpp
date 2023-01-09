#include <iostream>

void add_el(int* sorted_arr, int* new_arr, int size, int element, bool placed = false, int index1 = 0, int index2 = 0) {

    // End of original array is reached, end recursion
    if (index1 == size)
    {
        return;
    }
    
    // Copy elements from original array onto the new array
    new_arr[index2] = sorted_arr[index1];

    // Element is in interval (0 ; size - 1)
    if (element >= sorted_arr[index1] && element <= sorted_arr[index1 + 1] && !placed)
    {
        new_arr[++index2] = element;
        placed = true;
    }
    // Element is larger than the largest element of original array
    else if (element > sorted_arr[index1] && index1 == size - 1 && !placed)
    {
        new_arr[++index2] = element;
        placed = true;
    }
    // Elementi is smaller than first element of original array
    else if (element < sorted_arr[index1] && index1 == 0 && !placed)
    {
        new_arr[index2] = element;
        new_arr[++index2] = sorted_arr[index1];
        placed = true;
    }
    
    // Recursive step
    return add_el(sorted_arr, new_arr, size, element, placed, index1 + 1, index2 + 1);
}

int main() {
    int sorted[] = {4, 4, 4, 4, 4};
    int sorted2[] = {2, 8, 65, 156};
    int num = 4;
    int new_sorted[6];
    add_el(sorted, new_sorted, 5, num);

    for (size_t i = 0; i < 6; i++)
    {
        std::cout << new_sorted[i] << " ";
    }
    

    return 0;
}