

#include <iostream>

int main()
{
    char symbol;
    std::cout << "Enter a letter: ";
    std::cin >> symbol;
    char LowerToUpper = symbol - 32;
    char UpperToLower = symbol + 32;
    if ((symbol >= 'a' && symbol <= 'z') || (symbol >= 'A' && symbol <= 'Z'))
    {
        if (symbol >= 'a' && symbol <= 'z')
        {
            std::cout << LowerToUpper;
        }
        if (symbol >= 'A' && symbol <= 'Z')
        {
            std::cout << UpperToLower;
        }
    }
    else 
    {
        std::cout << "Invalid!";
    }

    return 0;
}

