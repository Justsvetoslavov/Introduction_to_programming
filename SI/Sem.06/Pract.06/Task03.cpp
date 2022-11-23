#include <iostream>
void ChangeLastBit(int& number);
void Swap(int* number, int length);
int main()
{
    int numberInput = 0;
    std::cin >> numberInput;
    ChangeLastBit(numberInput);
    std::cout << numberInput;
}
void ChangeLastBit(int& numberInput)
{
    int number = numberInput;
    int binaryDigits[100];
    int length = 0;

    //convert to binary
    while (number>0)
    {
        binaryDigits[length] = number % 2;
        length++;
        number /= 2;
    }

    //reverse array
    Swap(binaryDigits, length);

    //convert to ten NS with changed last bit
    bool changedLastBit = false;
    for (int i = length-1; i >= 0; i--)
    {
        int currBit = binaryDigits[i];
        if (currBit==1 && changedLastBit == false)
        {
            currBit = 0;
            changedLastBit = true;
            numberInput = 0;
        }
        numberInput += currBit * pow(2, length - 1 - i);
    }
}
void Swap(int* number, int length)
{
    for (int i = 0; i < length/2; i++)
    {
        int tmp = number[i];
        int a = number[length - 1 - i];
        number[i] = number[length-1-i];
        number[length-1-i] = tmp;
    }
}

