#include <iostream>

int main() {
    int sum = 0;
    int n = 0;
    do {
        std::cin >> n;
        sum += n;
    } while (n != 0);

    std::cout << sum << '\n';

    return 0;
}
