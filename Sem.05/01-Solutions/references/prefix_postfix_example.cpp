#include <iostream>

int& PrefixPlusPlus(int& a) {
    a = a + 1;
    return a;
}

int PostfixPlusPlus(int& a) {
    a = a + 1;
    return a - 1;
}

int main() {
    int a = 1;

    const int prefixResult = PrefixPlusPlus(a);
    std::cout << "Prefix result: " << prefixResult << ", a = " << a << '\n';

    const int postfixResult = PostfixPlusPlus(a);
    std::cout << "Postfix result: " << postfixResult << ", a = " << a << '\n';

    return 0;
}
