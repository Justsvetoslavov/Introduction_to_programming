#include <iostream>

int main() {
    int n = 0;
    std::cin >> n;

    long long current = 1;
    long long next = 1;
    bool isFirst = true;

    while (current <= n) {
        if (!isFirst) {
            std::cout << ' ';
        }
        isFirst = false;
        std::cout << current;

        const long long sum = current + next;
        current = next;
        next = sum;
    }

    std::cout << '\n';

    return 0;
}
