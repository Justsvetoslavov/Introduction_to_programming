#include <iostream>

bool IsCapitalLetter(char symbol) {
    return symbol >= 'A' && symbol <= 'Z';
}

bool CheckSymbol(char symbol) {
    return IsCapitalLetter(symbol) || (symbol >= 'a' && symbol <= 'z');
}

int main() {
    char symbol = '\0';
    std::cin >> symbol;

    std::cout << std::boolalpha << IsCapitalLetter(symbol) << ' ' << CheckSymbol(symbol) << '\n';

    return 0;
}
