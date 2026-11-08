#include <iostream>

int main() {
    const int caseOffset = 'a' - 'A';

    char symbol = '\0';
    std::cin >> symbol;

    if (symbol >= 'a' && symbol <= 'z') {
        std::cout << static_cast<char>(symbol - caseOffset) << '\n';
    } else if (symbol >= 'A' && symbol <= 'Z') {
        std::cout << static_cast<char>(symbol + caseOffset) << '\n';
    } else {
        std::cout << "Invalid character\n";
    }

    return 0;
}
