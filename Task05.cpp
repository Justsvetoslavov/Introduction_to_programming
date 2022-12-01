#include <iostream>

void switchDigits(int& first, int& second, int k) {
    int powerTen = 1;
    for(int i = 1; i < k; i++) {
        powerTen *= 10;
    }
    int digitOfFirst = (first / powerTen) % 10;
    int digitOfSecond = (second / powerTen % 10);
    if(powerTen <= first && powerTen <= second) {
    first -= (digitOfFirst * powerTen);
    second -= (digitOfSecond * powerTen);
    first += (digitOfSecond * powerTen);
    second += (digitOfFirst * powerTen);
    }
}

int main() {
    int firstNumber, secondNumber, k;
    if(k < 0) return 0;
    std::cin >> firstNumber >> secondNumber >> k;
    switchDigits(firstNumber, secondNumber, k);
    std::cout << firstNumber << " " << secondNumber << std::endl;
}