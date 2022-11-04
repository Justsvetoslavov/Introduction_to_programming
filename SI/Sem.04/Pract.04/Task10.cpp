
#include <iostream>
using namespace std;

int pow(int num, unsigned N) {

    int result = 0;

    if (N == 0) {
        result = 1;
    }
    else if (N > 0) {
        for (N; N >= 1; N--) {
            result *= num;
        }
    }
    return result;
}


int decimalToBinary(int num) {

    int binNumber = 0;
    int power = 0;

    while (num > 0) {
        int reminder = num % 2;
        int temp = pow(10, power);
        binNumber = binNumber + (reminder * temp);
        power++;
        num /= 2;
    }

    return binNumber;
}

int main()
{
    cout << decimalToBinary(8);
}
