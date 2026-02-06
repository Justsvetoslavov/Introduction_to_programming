#include <iostream>

// Check if the current character is a digit
bool isDigit(char c) {
    return c >= '0' && c <= '9';
}

// Function that checks if a given number is a perfect square
// Using a simple loop to avoid adding the <cmath> library
bool isPerfectSquare(int n) {
    if (n < 0) return false;
    if (n < 2) return true; // 0 and 1 are perfect squares

    // Using i <= n/i instead of i*i <= n to avoid overflow
    for (int i = 2; i <= n / i; i++) {
        if (i * i == n) {
            return true;
        }
    }
    return false;
}

// Main function for solving the task
int countPerfectSquares(const char* str) {
    int totalCount = 0;
    int currentNum = 0;
    bool inNumber = false;

    for (int i = 0; str[i] != '\0'; i++) {
        // Check if the current character is a digit
        if (isDigit(str[i])) {
            currentNum = currentNum * 10 + (str[i] - '0');
            inNumber = true;
        } 
        else {
            // If we were in a number and encounter a non-digit character
            if (inNumber) {
                if (isPerfectSquare(currentNum)) {
                    totalCount++;
                }
                currentNum = 0; // Reset for the next number
                inNumber = false;
            }
        }
    }

    // Check after the loop ends, in case the string ends with a number
    if (inNumber) {
        if (isPerfectSquare(currentNum)) {
            totalCount++;
        }
    }

    return totalCount;
}

int main() {
    // Test examples from the problem
    char s1[] = "abc16fg20h9";
    char s2[] = "test2test4test25";
    
    std::cout << "=== Examples from the problem ===" << std::endl;
    std::cout << "Input: \"" << s1 << "\" -> Result: " << countPerfectSquares(s1) << " (Expected: 2)" << std::endl;
    std::cout << "Input: \"" << s2 << "\" -> Result: " << countPerfectSquares(s2) << " (Expected: 2)" << std::endl;
    
    // Additional test cases
    char s3[] = "0";
    char s4[] = "1a4b9c16d25";
    char s5[] = "abcd";
    char s6[] = "100test49end36";
    char s7[] = "00016test009";
    
    std::cout << "\n=== Additional tests ===" << std::endl;
    std::cout << "Input: \"" << s3 << "\" -> Result: " << countPerfectSquares(s3) << " (Expected: 1, 0 is a square)" << std::endl;
    std::cout << "Input: \"" << s4 << "\" -> Result: " << countPerfectSquares(s4) << " (Expected: 5)" << std::endl;
    std::cout << "Input: \"" << s5 << "\" -> Result: " << countPerfectSquares(s5) << " (Expected: 0)" << std::endl;
    std::cout << "Input: \"" << s6 << "\" -> Result: " << countPerfectSquares(s6) << " (Expected: 3)" << std::endl;
    std::cout << "Input: \"" << s7 << "\" -> Result: " << countPerfectSquares(s7) << " (Expected: 2)" << std::endl;

    return 0;
}