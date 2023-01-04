#include <iostream>

void swap(int& number1, int& number2)
{
    int temp = number1;
    number1 = number2;
    number2 = temp;
}

int main()
{
    int number1, number2;
    std::cin >> number1 >> number2;
    swap(number1, number2);
    std::cout << number1 << std::endl << number2;
}