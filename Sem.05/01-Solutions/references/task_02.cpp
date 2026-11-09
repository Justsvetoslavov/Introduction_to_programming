#include <cctype>
#include <iostream>

// Custom-made functions
void ToUpperCustom(char& c) {
    if (c >= 'a' && c <= 'z')
        c -= ('a' - 'A');
}

void ToLowerCustom(char& c) {
    if (c >= 'A' && c <= 'Z')
        c += ('a' - 'A');
}

int main() {
    // Custom-made functions examples
    char ch1 = 'a';
    char ch2 = 'B';

    // Custom-made functions
    ToUpperCustom(ch1);
    ToLowerCustom(ch2);

    std::cout << "Custom: " << ch1 << " " << ch2 << std::endl;

    // STL functions example
    char ch3 = 'a';
    char ch4 = 'B';

    // STL functions
    ch3 = static_cast<char>(std::toupper(ch3));
    ch4 = static_cast<char>(std::tolower(ch4));

    std::cout << "STL:    " << ch3 << " " << ch4 << std::endl;

    return 0;
}
