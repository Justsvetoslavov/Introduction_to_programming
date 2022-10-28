#include <iostream>

bool isCapitalLetter(char S)
{
    return (S >= 'A' && S <= 'Z');
}

bool checkSymbol(char S)
{
    return ((S >= 'A' && S <= 'Z') || (S >= 'a' && S <= 'z'));
}

int main()
{
    char s;
    std::cout << "Please enter a symbol: ";
    std::cin >> s;
    std::cout << std::endl << "Is the symbol a capital letter: " << std::boolalpha << isCapitalLetter(s) << std::endl;
    std::cout << "Is the symbol a letter: " << std::boolalpha << checkSymbol(s);
}