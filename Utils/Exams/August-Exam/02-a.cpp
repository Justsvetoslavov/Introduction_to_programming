// Задача 2 - примерно решение 1
#include <iostream>
using namespace std;

int main() {
    int rowCount;
    cin >> rowCount;

    int arithmeticRowsCount = 0;

    for (int row = 0; row < rowCount; ++row) {
        int previous = 0, current = 0;
        long long difference = 0;
        bool isArithmetic = true;

        for (int col = 0; col < rowCount; ++col) {
            cin >> current;

            if (col == 1) {
                // От първите два елемента определяме "стъпката" на прогресията.
                difference = static_cast<long long>(current) - previous;
            } else if (col >= 2) {
                long long currentDifference = static_cast<long long>(current) - previous;
                if (currentDifference != difference) {
                    isArithmetic = false;
                }
            }

            previous = current;
        }

        if (isArithmetic) {
            ++arithmeticRowsCount;
        }
    }

    cout << arithmeticRowsCount << endl;
    return 0;
}
