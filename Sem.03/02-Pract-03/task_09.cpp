#include <iostream>

int main() {
    int n = 0;
    std::cin >> n;

    int current = 1, next = 1;

    while (current <= n) {
        std::cout << current << ' ';

        const int sum = current + next;
        current = next;
        next = sum;
    }

    std::cout << '\n';

    return 0;
}
