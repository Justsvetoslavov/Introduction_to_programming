#include <iostream>

int main() {
    int n = 0;
    std::cin >> n;
    // The reverse of a positive int, plus one, can exceed INT_MAX.
    long long reversed = 0;

    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    std::cout << reversed + 1 << '\n';

    return 0;
}
