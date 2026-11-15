#include <iostream>

int main() {
    double a = 0.0, b = 0.0;
    char operation = '\0';
    std::cin >> a >> operation >> b;

    switch (operation) {
        case '+':
            std::cout << a + b << '\n';
            break;
        case '-':
            std::cout << a - b << '\n';
            break;
        case '*':
            std::cout << a * b << '\n';
            break;
        case '/':
            if (b == 0) {
                std::cout << "Division by zero\n";
            } else {
                std::cout << a / b << '\n';
            }
            break;
        default:
            std::cout << "Unknown operation\n";
            break;
    }

    return 0;
}
