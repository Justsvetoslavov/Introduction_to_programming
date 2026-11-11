// Ограничения на входа:
//   N >= 1 и N <= 20
//
// Всяка редица се обработва при въвеждането: пазим само предишното число и разликата между първите
// два елемента. Дори разликата да се наруши, дочитаме редицата докрай, иначе следващата редица
// ще започне от грешно място във входа. Разликата е long long, защото разликата на две int стойности
// може да не се събира в int.

#include <iostream>

bool IsArithmeticRow(int n) {
    int previous = 0;
    std::cin >> previous;

    long long difference = 0;
    bool isArithmetic = true;

    for (int i = 1; i < n; ++i) {
        int current = 0;
        std::cin >> current;

        long long currentDifference = static_cast<long long>(current) - previous;

        if (i == 1) {
            difference = currentDifference;
        } else if (currentDifference != difference) {
            isArithmetic = false;
        }

        previous = current;
    }

    return isArithmetic;
}

int main() {
    int n = 0;
    std::cin >> n;

    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (IsArithmeticRow(n)) {
            ++count;
        }
    }

    std::cout << count << '\n';

    return 0;
}
