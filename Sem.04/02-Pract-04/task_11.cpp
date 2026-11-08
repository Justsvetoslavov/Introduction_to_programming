#include <iostream>

// Returns 0 for division by zero, as the statement defines no error value
int Calculate(int a, int b, char action = '+') {
    switch (action) {
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            return b != 0 ? a / b : 0;
        case '%':
            return b != 0 ? a % b : 0;
        default:
            return a + b;
    }
}

int main() {
    std::cout << Calculate(7, 3, '*') << '\n'; // 21
    std::cout << Calculate(7, 3) << '\n';      // 10

    return 0;
}
