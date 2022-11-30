#include <iostream>

int countOnes(int number) {
    int numberOfOnes = 0;
    while (number != 0) {
        if ((number & 1) == 1) {
            numberOfOnes += 1;
        }
        number >>= 1;
    }

    return numberOfOnes;
}

int main2()
{

    std::cout << countOnes(10000);
    return 0;
}