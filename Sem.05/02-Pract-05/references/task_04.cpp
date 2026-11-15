#include <iostream>

int CountDistinctPrimeDivisors(int number) {
    int count = 0;

    for (int divisor = 2; number > 1; ++divisor) {
        if (number % divisor == 0) {
            ++count;

            while (number % divisor == 0) {
                number /= divisor;
            }
        }
    }

    return count;
}

void NarrowInterval(int& a, int& b, int k) {
    int smallest = 0, largest = 0;

    for (int number = a; number <= b; ++number) {
        if (CountDistinctPrimeDivisors(number) == k) {
            if (smallest == 0) {
                smallest = number;
            }

            largest = number;
        }
    }

    if (smallest != 0) {
        a = smallest;
        b = largest;
    }
}

int main() {
    int a = 0, b = 0, k = 0;
    std::cin >> a >> b >> k;

    NarrowInterval(a, b, k);

    std::cout << a << ' ' << b << '\n';

    return 0;
}
