#include <iostream>

bool isPalindrome(char* arr, int len) {
    if (len <= 0) return true;
    if (arr[0] != arr[len - 1]) return false;

    return isPalindrome(arr + 1, len - 2);
}