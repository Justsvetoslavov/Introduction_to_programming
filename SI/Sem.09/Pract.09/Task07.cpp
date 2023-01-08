// zadacha 7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void reverseArray(int array[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = array[i];
        array[i] = array[size - i - 1];
        array[size - i - 1] = temp;
    }
}
void copyArray(int* dest, int* src, int size) {
    for (int i = 0; i < size; i++) {
        dest[i] = src[i];
    }
}
void enterarr(int* arr,int size)
{
    for (int i = 0; i < size; i++) {
       
      cin >> arr[i];
    }
}
bool compareArrays(int* a, int* b, int size) {
    for (int i = 0; i < size; i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}
bool  checkPalindrom(int* arr, int size)
{
    const int size0 = 1000;
    int copyarr[size0];
    copyArray(copyarr, arr, size);
    reverseArray(copyarr,size);
    if (compareArrays(arr,copyarr,size)){
        return true;
    }
    return false;
}
bool checksteps(int* arr, int size,  int n)
{
    if (checkPalindrom(arr, size)){
        return true;
    }
   
    
    if (n > 0) {
      

        for (int i = 0; i < size - 2; i++) {
            arr[i] = arr[i + 1];  
        }

        return checksteps(arr, size-2, n-1);
    }
    return false;
}
int main()
{
    const int size = 1000;
    
    unsigned int n;
    cin >> n;
    size_t size2;
    cin >>size2;
    int arr[size];
  enterarr(arr, size2);
 

    int leftindex = 0;
    int rightindex = size2;
    cout<<checksteps(arr, size2,n);


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
