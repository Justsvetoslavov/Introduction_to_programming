#include <iostream>

int Gcd(int a, int b) {
    while (b != 0) {
        const int remainder = a % b;
        a = b;
        b = remainder;
    }

    return a;
}

int main() {
    int a = 0, b = 0, c = 0, d = 0;
    std::cin >> a >> b >> c >> d;

    const int gcdAB = Gcd(a, b);
    const int gcdCD = Gcd(c, d);

    std::cout << gcdAB << ' ' << gcdCD << ' ' << Gcd(gcdAB, gcdCD) << '\n';

    return 0;
}
