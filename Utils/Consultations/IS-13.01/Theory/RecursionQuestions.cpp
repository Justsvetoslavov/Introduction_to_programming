#include <iostream>

// What type of recursion is this, how will it print the array?
// Array: [1, 2, 3, 4, 5], size: 5
// Answer: Head recursion => 1 2 3 4 5
void printArr1(int* arr, size_t size) {
    if (size == 0) {
        return;
    }

    printArr1(arr, size - 1);
    std::cout << arr[size - 1] << " ";
}

// What type of recursion is this, how will it print the array?
// Array: [1, 2, 3, 4, 5], size: 5
// Answer: Tail recursion => 5 4 3 2 1
void printArr2(int* arr, int size) {
    if (size == 0) {
        return;
    }

    std::cout << arr[size - 1] << " ";
    printArr2(arr, size - 1);
}

// What will the function return if n = 5?
// Answer: the result will always be 0
// because when N is 1 we should calculate fact with N * fact(--N) 
// --N will give us 0
// => we have to calculate fact(0) so we return 1
// but N * 1 is actually 0 * 1, because N is already decremented
size_t fact1(size_t n) {
    if (n == 0) {
        return 1;
    }

    return n * fact1(--n);
}

// What will the function return if n = 5?
// Answer: Infinite loop - we will always call fact with N
// Because N-- decrements the number after we use it
size_t fact2(size_t n) {
    if (n == 0) {
        return 1;
    }

    return n * fact2(n--);
}