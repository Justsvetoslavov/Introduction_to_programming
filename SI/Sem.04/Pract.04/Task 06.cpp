#include <iostream>

bool isCapitalLetter(char S)
{
    if (S >= 'A' && S <= 'Z')
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool checkSymbol(char S)
{
    if ((S >= 'A' && S <= 'Z') || (S>='a' && S<='z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char s;
    std::cout << "Please enter a symbol: ";
    std::cin >> s;
    std::cout << std::endl << "Is the symbol a capital letter: " << std::boolalpha << isCapitalLetter(s) << std::endl;
    std::cout << "Is the symbol a letter: " << std::boolalpha << checkSymbol(s);
}