

#include <iostream>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    std::cout << "a = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;
    std::cout << "c = ";
    std::cin >> c;
    if (a > b && a > c && a != 0)
    {
        if (b > c)
        {
            std::cout << a << b << c;
        }
        else
        {
            std::cout << a << c << b;
        }
    }
    if (b > a && b > c && b != 0)
    {
        if (a > c)
        {
            std::cout << b << a << c;
        }
        else
        {
            std::cout << b << c << a;
        }
    }
    if (c > a && c > b && c != 0)
    {
        if (a > b)
        {
            std::cout << c << a << b;
        }
        else
        {
            std::cout << c << b << a;
        }
    }
    return 0;
}

