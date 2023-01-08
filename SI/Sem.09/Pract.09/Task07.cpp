#include <iostream>
 
bool isPalindrome(char* arr, int len) {
    if (len == 0) return true;
    if (arr[0] != arr[len - 1]) return false;

    return isPalindrome(arr + 1, len - 2);
}

bool isPalindromePossible(char* arr, int len, int maxChanges) {
    if (maxChanges < 0) {
        return false;
    }
    for (int i = 0; i <= maxChanges; i++) {
        if (isPalindrome(arr + i, len - maxChanges)) {
            return true;
        }
    }
    return isPalindromePossible(arr, len, maxChanges - 1);
}