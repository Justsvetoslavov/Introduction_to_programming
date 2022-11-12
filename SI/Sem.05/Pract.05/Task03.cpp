#include <iostream>
using namespace std;

long long intToBinary(int num)
{
    int binaryNumber[32];
    long long result = 0;

    int i = 0;
    while (num > 0) 
    {
        binaryNumber[i] = num % 2;
        num /= 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        result += binaryNumber[j];
        result *= 10;
    }

    return (result / 10);
}

int main()
{
    int number;

    cout << "Enter one whole number: ";
    cin >> number;

    cout << intToBinary(number);
}