#include <iostream>

int main()
{
    int decimalNum;
    int binaryNum[20];

    std::cin >> decimalNum;
    int actualSize = 0;
    while (decimalNum > 0)
    {
        binaryNum[actualSize] = decimalNum % 2;

        decimalNum /= 2;
        actualSize++;
    }
    //print reversed
    for (int i = actualSize - 1; i >= 0; i--)
    {
        std::cout << binaryNum[i];
    }

    return 0;
}
