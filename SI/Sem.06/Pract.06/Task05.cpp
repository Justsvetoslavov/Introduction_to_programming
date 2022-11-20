#include <iostream>
int isBinaryPart(int number, int smallerInt) {
    bool isTheSame = true;
    while (smallerInt <= number) {
        int toCompare = number & smallerInt;
        isTheSame = toCompare == smallerInt;
        if (isTheSame == true) {
            break;
        }
        number = number >> 1;
    }

    return isTheSame;
}

int main5()
{
    int k, number;
    std::cin >> number >> k;

    std::cout << isBinaryPart(number, k);

    return 0;
}