#include <iostream>

using namespace std;

int getSize(int n)
{
    int size = 0;
    while(n != 0)
    {
        n /= 10;
        size++;
    }
    return size;
}

bool checkPalindrome(int* array, int size)
{
    int center = size/2;
    for (int i = 0; i < center; i++)
    {
        if(array[i] != array[size - i - 1])
            return false;
    }
    
    return true;
}

int main()
{
    int n;
    int number[100];
    cin >> n;
    int copyN = n;
    
    int size = getSize(n);
    for (int i = 0; i < size; i++)
    {
        number[i] = n % 10;
        n /= 10;
    }
    cout << copyN << (checkPalindrome(number, size) ? " is a palindrome" : " is not a palindrome") << endl;
}