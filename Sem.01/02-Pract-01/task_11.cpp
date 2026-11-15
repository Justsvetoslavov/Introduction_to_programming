#include <iostream>

int main() {
    int a = 0, b = 0;
    std::cin >> a >> b;

    const bool isFirstSmaller = a < b; // converted to 1 or 0 in the expressions below

    std::cout << "Min: " << a * isFirstSmaller + b * !isFirstSmaller << '\n';
    std::cout << "Max: " << b * isFirstSmaller + a * !isFirstSmaller << '\n';

    return 0;
}
