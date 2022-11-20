#include <iostream>

int shiftTheBit(int number) {
    int counter = 0;
    do {
        counter += 1;
        number = number >> 1;
    } while (number % 2 != 1);

    number = number >> 1 << 1;

    for (int i = 0; i < counter; i++) {
        number = number << 1;
    }

    return number;
}

int main3()
{

    std::cout << shiftTheBit(100);

    return 0;
}