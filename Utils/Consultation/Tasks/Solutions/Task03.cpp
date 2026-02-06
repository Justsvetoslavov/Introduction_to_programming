#include <iostream>

using namespace std;

/**
 * n - size of the array
 * index - current element
 * evensCount - how many even numbers we've selected so far
 * currentSum - current sum of selected numbers
 * targetK - how many even numbers we're looking for exactly
 */
int countCustomSubsets(int* arr, int n, int index, int evensCount, int currentSum, int targetK) {
    // Base case: we've traversed all elements
    if (index == n) {
        // Check both conditions simultaneously:
        // 1. The count of even numbers is exactly targetK
        // 2. The sum of the subset is odd
        if (evensCount == targetK && currentSum % 2 != 0) {
            return 1;
        }
        return 0;
    }

    // Recursive steps:
    
    // 1. Include the current element
    int nextEvensCount = evensCount + (arr[index] % 2 == 0 ? 1 : 0);
    int include = countCustomSubsets(arr, n, index + 1, nextEvensCount, currentSum + arr[index], targetK);

    // 2. Do NOT include the current element
    int exclude = countCustomSubsets(arr, n, index + 1, evensCount, currentSum, targetK);

    return include + exclude;
}

int main() {
    cout << "=== TESTS FROM THE PROBLEM ===" << endl << endl;
    
    // Example 1: {1, 2, 3, 4}, K=1, Expected: 4
    int arr1[] = {1, 2, 3, 4};
    cout << "Test 1: {1, 2, 3, 4}, K=1" << endl;
    cout << "Result: " << countCustomSubsets(arr1, 4, 0, 0, 0, 1) << " (Expected: 4)" << endl << endl;
    
    // Example 2: {2, 4, 6}, K=1, Expected: 0
    int arr2[] = {2, 4, 6};
    cout << "Test 2: {2, 4, 6}, K=1" << endl;
    cout << "Result: " << countCustomSubsets(arr2, 3, 0, 0, 0, 1) << " (Expected: 0)" << endl << endl;
    
    // Example 3: {1, 2, 5}, K=1, Expected: 2
    int arr3[] = {1, 2, 5};
    cout << "Test 3: {1, 2, 5}, K=1" << endl;
    cout << "Result: " << countCustomSubsets(arr3, 3, 0, 0, 0, 1) << " (Expected: 2)" << endl << endl;
    
    // Example 4: {1, 3}, K=0, Expected: 2
    int arr4[] = {1, 3};
    cout << "Test 4: {1, 3}, K=0" << endl;
    cout << "Result: " << countCustomSubsets(arr4, 2, 0, 0, 0, 0) << " (Expected: 2)" << endl << endl;
    
    // Example 5: {2, 2, 1}, K=2, Expected: 1
    int arr5[] = {2, 2, 1};
    cout << "Test 5: {2, 2, 1}, K=2" << endl;
    cout << "Result: " << countCustomSubsets(arr5, 3, 0, 0, 0, 2) << " (Expected: 1)" << endl << endl;
    
    // Example 6: {1, 3, 5}, K=1, Expected: 0
    int arr6[] = {1, 3, 5};
    cout << "Test 6: {1, 3, 5}, K=1" << endl;
    cout << "Result: " << countCustomSubsets(arr6, 3, 0, 0, 0, 1) << " (Expected: 0)" << endl << endl;
    
    // Example 7: {1, 3, 5, 7}, K=0, Expected: 8
    int arr7[] = {1, 3, 5, 7};
    cout << "Test 7: {1, 3, 5, 7}, K=0" << endl;
    cout << "Result: " << countCustomSubsets(arr7, 4, 0, 0, 0, 0) << " (Expected: 8)" << endl;

    return 0;
}