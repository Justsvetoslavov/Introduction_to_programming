#include <iostream>

int main() {
    int n = 0;
    std::cin >> n;
    int reversed = 0;

    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    std::cout << reversed + 1;

    return 0;
}
