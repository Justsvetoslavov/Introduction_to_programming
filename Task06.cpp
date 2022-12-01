#include <iostream>

void split(int& first, int& second, int number) {
    int numberCopy = number, powerTen = 1, counter = 0;
    while(numberCopy > 0) {
        counter++;
        numberCopy /= 10;
    }
    int factor = counter / 2;
    for(int i = 1; i <= factor; i++) {
        powerTen *= 10;
    }
    first = number / powerTen;
    second = number % powerTen;
}

int main() {
    int number;
    std::cin >> number;
    int firstHalf = 0, secondHalf = 0;
    split(firstHalf, secondHalf, number);
    std::cout << firstHalf << " " << secondHalf;
}