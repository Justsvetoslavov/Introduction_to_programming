#include <iostream>

int main() {
    int n = 0;
    char symbol = '\0';
    std::cin >> n >> symbol;

    if (n < 2 || n > 9) {
        std::cout << "Invalid input\n";
        return 1;
    }

    for (int row = 1; row <= 2 * n - 1; ++row) {
        const int spaces = row < n ? n - row : row - n;
        const int symbols = 2 * (n - spaces) - 1;

        for (int i = 0; i < spaces; ++i) {
            std::cout << ' ';
        }

        for (int i = 0; i < symbols; ++i) {
            std::cout << symbol;
        }

        std::cout << '\n';
    }

    return 0;
}
