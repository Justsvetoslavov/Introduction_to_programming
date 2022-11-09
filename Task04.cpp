#include <iostream>

int returnNumberLength(int number)
{
    int i = 0;
    while (number > 0)
    {
        number /= 10;
        i++;
    }
    return i;
}

void breakDownIntoAnArray(int a[], int size, int number)
{
    for (int i = 0; i < size; i++)
    {
        a[i] = number % 10;
        number /= 10;
    }
}

bool isPalindrome(int a[], int size)
{
    const int LIMIT = size / 2;
    for (int i = 0; i < LIMIT; i++)
    {
        if (a[i] == a[size - i - 1])
            return true;
    }
    return false;
}

int main()
{
    int number;
    std::cout << "Please enter your number:" << std::endl;
    std::cin >> number;
    if (number < 0)
    {
        std::cout << "Invalid input!" << std::endl;
        return 0;
    }

    else if (number >= 0 && number < 10)
    {

        std::cout << "One-digit numbers are always palindromes!" << std::endl;
        return 0;
    }
    else
    {
        const int SIZE = returnNumberLength(number);
        int numberHolder[SIZE];
        breakDownIntoAnArray(numberHolder, SIZE, number);
        isPalindrome(numberHolder, SIZE) ? std::cout << "This number is a palindrome" << std::endl : std::cout << "This number is NOT a palindrome" << std::endl;
        return 0;
    }
}