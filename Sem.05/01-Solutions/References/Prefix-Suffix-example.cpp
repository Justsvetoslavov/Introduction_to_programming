#include <iostream>

int& PrefixPlusPlus(int& a) {
    a = a + 1;
    return a;
}

int SuffixPlusPlus(int& a) {
    a = a + 1;
    return a - 1;
}

int main() {
    int a = 1;

    PrefixPlusPlus(a);
    SuffixPlusPlus(a);
}
