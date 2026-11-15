#include <iostream>

int main() {
    // Each pair '\\' produces one literal '\'
    std::cout << "\\\\" << '\n';

    // '\\n' is a multicharacter literal (backslash, then n), not a missing quote.
    // Its type is int and its value is implementation-defined.
    // std::cout << '\\n';
    return 0;
}
