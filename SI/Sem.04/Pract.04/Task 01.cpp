#include <iostream>

int sum(int a, int b)
{
    return a + b;
}


int main()
{
    int num1, num2;
    std::cout << "Please enter number 1: ";
    std::cin >> num1;
    std::cout << std::endl << "Please enter number 2: ";
    std::cin >> num2;
    std::cout <<std::endl<<"The sum of number 1 and number 2 is: "<<sum(num1, num2);
}