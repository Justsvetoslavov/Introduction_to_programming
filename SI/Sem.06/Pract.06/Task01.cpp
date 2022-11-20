#include <iostream>

const int SIZE = 20;
const char dict[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };

int convertFromDecimalAndGiveLength(int num, int systemCode, char* buffer) {
    char numbers[SIZE] = {};
    int count = 0;
    while (num != 0) {
        char c = dict[num % systemCode];
        buffer[count++] = c;
        num /= systemCode;
    }

    return count;
}

int convertToDecimal(int number, int systemCode) {
    int sum = 0;
    int power = 0;
    while (number != 0) {
        int remainder = number % 10;
        number /= 10;
        sum = sum + remainder * std::pow(systemCode, power++);
    }

    return sum;
}

void printNumbers(char* arrayNums, int length) {
    for (int i = length - 1; i >= 0; i--) {
        std::cout << (char)arrayNums[i];
    }
}

void convertToASystem(int number, int currentCode, int desiredCode, char* buffer) {
    int numberDecimal = convertToDecimal(number, currentCode);
    int lengthOfBuffer = convertFromDecimalAndGiveLength(numberDecimal, desiredCode, buffer);
    printNumbers(buffer, lengthOfBuffer);

}

int main1()
{
    char buffer[SIZE];
    int number = 20121;
    convertToASystem(number, 3, 15, buffer);
    return 0;
}