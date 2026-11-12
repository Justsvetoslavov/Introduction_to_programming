#include <iostream>

double Fabs(double num) {
    // Doubles have a negative zero: -0.0 == 0 is true, but -0.0 < 0 is false, so -0.0 would be returned
    // unchanged and printed as "-0". Returning 0 here gives the expected output.
    if (num == 0) {
        return 0;
    }
    return num < 0 ? -num : num;
}

int main() {
    double num = 0.0;
    std::cin >> num;

    std::cout << Fabs(num) << '\n';

    return 0;
}
