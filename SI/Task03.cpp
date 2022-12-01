#include <iostream>

void sort(int& min, int& mid, int& max) {
    int a = min, b = mid, c = max;
    if(a <= b && b <= c) {
        min = a;
        mid = b;
        max = c;
    } else if (a <= c && c <= b) {
        min = a;
        mid = c;
        max = b;
    } else if (b <= a && b <= c) {
        min = b;
        mid = a;
        max = c;
    } else if (b <= c && c <= a) {
        min = b;
        mid = c;
        max = a;
    } else if (c <= a && a <= b) {
        min = c;
        mid = a;
        max = b;
    } else {
        min = c;
        mid = b;
        max = a;
    }
}

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    sort(a,b,c);
    std::cout << a << " " << b << " " << c << std::endl;
}