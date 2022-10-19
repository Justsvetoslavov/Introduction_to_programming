

#include <iostream>

int main()
{
    int a = 0;
    int b = 0;
    std::cout << "a = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;
    int SUM = a + b;
    std::cout << a << "+" << b << "=" << SUM << std::endl;
    int SUB = a - b;
    std::cout << a << "-" << b << "=" << SUB << std::endl;
    int MULT = a * b;
    std::cout << a << "*" << b << "=" << MULT << std::endl;
    if (b != 0)
    {
        int DIV = a / b;
        std::cout << a << "/" << b << "=" << DIV << std::endl;
    }
    else
    {
        std::cout << "Error";
    }
    return 0;
}
