#include <iostream>

unsigned int Reverse(unsigned int n) {
    unsigned int result = 0;
    short lastDigit = 0;

    while (n != 0) {
        lastDigit = n % 10;
        (result *= 10) += lastDigit;
        n /= 10;
    }

    return result;
}

bool IsPalindrome(unsigned int n) {
    return n == Reverse(n);
}

int main() {
    unsigned int n = 0;
    std::cin >> n;

    std::cout << std::boolalpha << IsPalindrome(n) << std::endl;

    return 0;
}
