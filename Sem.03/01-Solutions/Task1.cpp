#include <iostream>

int main() {
    int sum = 0;
    int n;
    do {
        std::cin >> n;
        sum += n;
    } while (n != 0);

    std::cout << sum;

    return 0;
}
