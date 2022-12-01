#include <iostream>

int GCD(int alpha, int beta) {
    if(alpha == beta) return alpha;
    int first = (alpha > beta) ? alpha : beta;
    int second = (alpha < beta) ? alpha : beta;
        do{
             int remainder = first % second;
             first = second;
             second = remainder;
        } while (first != 0);
        return second;
}

void simplifyFraction(int& numerator, int& denominator) {
    if(numerator == denominator) {
        numerator = 1;
        denominator = 1;
    } else {
    int commonDivisor = GCD(numerator, denominator); 
    while(commonDivisor != 1) {
        numerator /= commonDivisor;
        denominator /= commonDivisor;
        commonDivisor = GCD(numerator, denominator);
    }
}
}

void printOutFraction(int num, int denom) {
    std::cout << num << "/" << denom;
}

void printOutTheEquation(int firstNumerator, int firstDenominator, int secondNumerator, int secondDenominator, int sumNum, int sumDenom) {
    printOutFraction(firstNumerator, firstDenominator);
    std::cout << " + ";
    printOutFraction(secondNumerator, secondDenominator);
    std::cout << " = ";
    printOutFraction(sumNum, sumDenom);
    std::cout << std::endl;
}

void sumTwoFractions(int firstNum, int firstDenom, int secondNum, int secondDenom, int& sumNum, int& sumDenom) {
    sumNum = (firstNum * secondDenom) + (secondNum * firstDenom);
    sumDenom = firstDenom * secondDenom;
    simplifyFraction(sumNum, sumDenom);
}

int main() {
    int firstNumerator, firstDenominator, secondNumerator, secondDenominator, sumNum, sumDenom;
    std::cin >> firstNumerator >> firstDenominator >> secondNumerator >> secondDenominator;
    simplifyFraction(firstNumerator, firstDenominator);
    simplifyFraction(secondNumerator, secondDenominator);
    sumTwoFractions(firstNumerator, firstDenominator, secondNumerator, secondDenominator, sumNum, sumDenom);
    printOutTheEquation(firstNumerator, firstDenominator, secondNumerator, secondDenominator, sumNum, sumDenom);
}