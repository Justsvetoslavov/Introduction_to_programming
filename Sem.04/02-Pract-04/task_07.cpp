#include <iostream>

void Print(char symbol, int count) {
    for (int i = 0; i < count; ++i) {
        std::cout << symbol;
    }
}

int main() {
    char symbol = '\0';
    int count = 0;
    std::cin >> symbol >> count;

    Print(symbol, count);
    std::cout << '\n';

    return 0;
}
