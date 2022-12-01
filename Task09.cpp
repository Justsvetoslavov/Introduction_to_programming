#include <iostream>

void transfer(int& a, int& b, int k) {
    int powerTen = 1;
    for(int i = 1; i <= k; i++) {
        powerTen *= 10;
    }
    int segment = a % powerTen;
    a /= powerTen;
    int bCopy = b;

    powerTen = 1;
    while(bCopy > 0) {
        powerTen *= 10;
        bCopy /= 10;
    }
    b += (powerTen * segment);
}

int main() {
    int a,b,k;
    std::cin >> a >> b >> k;
    if(k < 0 || a < 0 || b < 0) return 0;
    transfer(a,b,k);
    std::cout << a << " " << b << std::endl;
}