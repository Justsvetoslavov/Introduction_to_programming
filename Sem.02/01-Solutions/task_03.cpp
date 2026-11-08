#include <iostream>

int main() {
    int a = 0, b = 0, c = 0, d = 0, e = 0;
    std::cin >> a >> b >> c >> d >> e;

    std::cout << (((a <= b && b >= c && c <= d && d >= e) || (a >= b && b <= c && c >= d && d <= e))
        ? "yes"
        : "no");

    return 0;
}
