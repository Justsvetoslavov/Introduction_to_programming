#include <iostream>

int primeTermAmount(int number) {
    int amount = 0;
    for(int i = 2; i <= number; i++) {
        bool overPassed = false; 
        while(number % i == 0) {
            if(!overPassed) amount++;
            overPassed = true;
            number /= i;
         }
    }
    return amount;
}

void alterInterval(int& lower, int& upper, int amountOfTerms) {
    for(int i = lower; i <= upper; i++) {
        if(primeTermAmount(i) == amountOfTerms) {
            lower = i;
            break;
        }
    }
    for(int i = upper; i >= lower; i--) {
        if(primeTermAmount(i) == amountOfTerms) {
            upper = i;
            break;
        }
    }
}

int main() {
    int lowerBound, upperBound, numberOfTerms;
    if(lowerBound > upperBound || numberOfTerms < 0) return 0;
    std::cin >> lowerBound >> upperBound >> numberOfTerms;
    alterInterval(lowerBound, upperBound, numberOfTerms);
    std::cout << lowerBound << " " << upperBound << " " << numberOfTerms << std::endl;
}