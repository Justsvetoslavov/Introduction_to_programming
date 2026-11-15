#include <iostream>

int main() {
    char symbol = '\0';
    std::cin >> symbol;

    if (!((symbol >= 'a' && symbol <= 'z') || (symbol >= 'A' && symbol <= 'Z'))) {
        std::cout << "Not a Latin letter\n";
        return 0;
    }

    switch (symbol) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            std::cout << "Vowel\n";
            break;
        default:
            std::cout << "Consonant\n";
            break;
    }

    return 0;
}
