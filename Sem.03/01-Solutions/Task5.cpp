#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;

    if (a < b) {
        int temp = a;
        a = b;
        b = temp;
    }

    while (b != 0) {
        int r = a % b;

        a = b;
        b = r;
    }

    std::cout << a;

    return 0;
}
