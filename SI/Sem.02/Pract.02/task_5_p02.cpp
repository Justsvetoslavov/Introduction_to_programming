

#include <iostream>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    std::cout << "a: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b;
    std::cout << "c: ";
    std::cin >> c;
    if ((a < b + c) && (b < a + c) && (c < a + b))
    {
        std::cout << "Valid!";
    }
    else
    {
        std::cout << "Invalid!";
    }

}
