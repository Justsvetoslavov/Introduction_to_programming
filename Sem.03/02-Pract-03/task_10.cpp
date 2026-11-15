#include <iostream>

int main() {
    int number = 0;
    std::cin >> number;

    int digits = 0;
    int temp = number;

    do {
        ++digits;
        temp /= 10;
    } while (temp != 0);

    const int removedDigits = digits % 2 == 0 ? 2 : 1;
    const int keptOnEachSide = (digits - removedDigits) / 2;

    int rightPower = 1;
    for (int i = 0; i < keptOnEachSide; ++i) {
        rightPower *= 10;
    }

    const int removedPower = removedDigits == 2 ? 100 : 10;

    const int left = number / (rightPower * removedPower);
    const int right = number % rightPower;
    const int result = left * rightPower + right;

    std::cout << result << ", " << result + 1 << '\n';

    return 0;
}
