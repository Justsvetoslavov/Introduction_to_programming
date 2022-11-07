#include <iostream>
using namespace std;
int main()
{
    int binaryNum[30]; 
    cout << "Enter a number:";
    int num;
    cin >> num;
    int size = 0; 
    while (num > 0)
    {
        binaryNum[size] = num % 2;
        num /= 2;
        size ++;
    }
    for (int i = size - 1; i >= 0; i--)
    {
        cout << binaryNum[i];
    }
    return 0;
}