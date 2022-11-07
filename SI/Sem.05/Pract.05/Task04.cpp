#include <iostream>
using namespace std;
bool isPalindrome(int num)
{
    const int Size = 5; 
    int arr[Size];
    for (int i = 0; i < Size; i++)
    {
        arr[i] = num % 10; 
        num /= 10;
    }
    for (int i = 0; i < Size/2; i++)
    {
        if (arr[i] != arr[Size - i - 1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    cout << "Enter a number between [10000, 99999]: ";
    int num;
    cin >> num;
    cout << boolalpha << isPalindrome(num);
    return 0;
}