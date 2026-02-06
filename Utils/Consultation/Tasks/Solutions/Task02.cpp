#include <iostream>

using namespace std;

// Function that checks if a number is a palindrome
bool isPalindrome(int n) {
    if (n < 0) return false;
    if (n < 10) return true; // Single-digit numbers (including 0) are palindromes
    
    int original = n;
    int reversed = 0;
    
    // Reverse the digits of the number
    while (n > 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }
    
    return original == reversed;
}

// Allocate dynamic memory for the matrix
int** allocateMatrix(int rows, int cols) {
    int** matrix = new int*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }
    return matrix;
}

// Free the memory for the matrix
void deallocateMatrix(int** matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

// Read the matrix from standard input
void readMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
}

// Count the palindromes in the matrix
int countPalindromes(int** matrix, int rows, int cols) {
    int count = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (isPalindrome(matrix[i][j])) {
                count++;
            }
        }
    }
    return count;
}

// Extract all palindromes into an array
int* extractPalindromes(int** matrix, int rows, int cols, int count) {
    int* result = new int[count];
    int index = 0;
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (isPalindrome(matrix[i][j])) {
                result[index++] = matrix[i][j];
            }
        }
    }
    
    return result;
}

// Print the array
void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << (i == size - 1 ? "" : " ");
    }
    cout << endl;
}

int main() {
    int rows, cols;
    if (!(cin >> rows >> cols)) return 0;

    // Allocate memory for the matrix
    int** matrix = allocateMatrix(rows, cols);
    
    // Read the matrix
    readMatrix(matrix, rows, cols);
    
    // Count the palindromes
    int count = countPalindromes(matrix, rows, cols);
    
    // If no palindromes are found, free the memory and exit
    if (count == 0) {
        deallocateMatrix(matrix, rows);
        return 0;
    }

    // Extract the palindromes into a new array
    int* palindromes = extractPalindromes(matrix, rows, cols, count);
    
    // Print the result
    printArray(palindromes, count);
    
    // Free the memory
    delete[] palindromes;
    deallocateMatrix(matrix, rows);

    return 0;
}

// Alternative variant:
// Use temporary array[rows*cols]
//→ Extract palindromes (count as you go)
//→ Allocate exact-size array
//→ Copy palindromes to exact-size array
// Problem: Still requires allocating twice (temporary + final), and you copy data instead of traversing matrix twice.

/*
=== TEST EXAMPLES FROM THE PROBLEM ===

Example 1:
Input:
2 3
12 121 5
44 123 10
Expected output: 121 5 44

Example 2:
Input:
2 2
10 20
30 40
Expected output: (empty - no palindromes)

Example 3:
Input:
1 4
1 22 333 45
Expected output: 1 22 333

Example 4:
Input:
3 1
7
88
12
Expected output: 7 88

Example 5:
Input:
2 2
0 5
11 100
Expected output: 0 5 11
*/