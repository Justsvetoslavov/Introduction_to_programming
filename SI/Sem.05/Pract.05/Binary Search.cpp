// Seminar5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int binarySearch(int nums[], int len, int number) {
    int left = 0;
    int right = len - 1;

    while (left <= right) {
        int mid = (left + right) / 2;
        std::cout << nums[mid] << std::endl;
        if (nums[mid] == number) {
            return mid;
        }
        else if (nums[mid] > number) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }

    return -1;

}


int main()
{
  
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    std::cout << binarySearch(numbers, 12, 1);

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
