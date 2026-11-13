#include <iostream>

// Returns false when the operation is not defined. An omitted action is addition.
// The result is computed in long long: for two int operands every result fits,
// including INT_MIN * INT_MIN and INT_MIN / -1, which overflow in int.
bool Calculate(int a, int b, long long& result, char action = '+') {
    const long long left = a;

    switch (action) {
        case '+':
            result = left + b;
            return true;
        case '-':
            result = left - b;
            return true;
        case '*':
            result = left * b;
            return true;
        case '/':
            if (b == 0) {
                return false;
            }
            result = left / b;
            return true;
        case '%':
            if (b == 0) {
                return false;
            }
            result = left % b;
            return true;
        default:
            return false;
    }
}

int main() {
    int a = 0, b = 0;
    char action = '+';
    std::cin >> a >> b >> action;

    // Calculate(a, b, result) without an action would compute a + b.
    long long result = 0;
    if (!Calculate(a, b, result, action)) {
        std::cout << "Invalid operation\n";
        return 1;
    }

    std::cout << result << '\n';
    return 0;
}
