#include <iostream>
const int SIZE = 9;

void fillArray(int* array) {
    for (int i = 0; i < SIZE; i++) {
        int number;
        std::cin >> number;
        array[i] = number;
    }
}

bool containsTwoTimes(int* buffer, int element) {
    int count = 0;
    for (int i = 0; i < SIZE; i++) {
        if (buffer[i] == element) {
            count++;
        }
    }

    return (count == 2) ? true : false;
}

int findTheNumber(int* array) {
    for (int i = 0; i < SIZE; i++) {
        if (!containsTwoTimes(array, array[i])) {
            return array[i];
        }
    }
}


int main6()
{
    int buffer[20];
    int array[SIZE];
    fillArray(array);
    std::cout << findTheNumber(array);


    return 0;
}