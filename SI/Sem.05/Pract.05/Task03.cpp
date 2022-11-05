#include <iostream>
using namespace std;

void intToBinary(int num)
{
    int binaryNumber[32];

    int i = 0;
    while (num > 0) 
    {
        binaryNumber[i] = num % 2;
        num /= 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
        cout << binaryNumber[j];
}

int main()
{
    int number;

    cout << "Enter one whole number: ";
    cin >> number;

    intToBinary(number);
}