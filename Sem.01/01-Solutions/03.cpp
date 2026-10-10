#include <iostream>

int main() {
    // Each pair '\\' produces one literal '\'
    std::cout << "\\\\" << '\n';

    // Will this work?
    // std::cout << '\\n'; // NO! The compiler will throw an error because it expects a closing single quote for the character literal
    return 0;
}