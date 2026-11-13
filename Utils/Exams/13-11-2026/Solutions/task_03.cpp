// To compare two numbers lexicographically without strings or arrays, we walk them from
// the most significant (leftmost) digit to the least significant one. We find the largest
// power of 10 that does not exceed each number (powA and powB). In a loop we extract the
// leading digits with (a / powA) % 10 and (b / powB) % 10 and then divide the powers by 10.
// If all common digits match (one number is a prefix of the other, e.g. 4 and 41),
// the number with fewer digits is lexicographically smaller (powA == 0 && powB > 0).

#include <iostream>

unsigned long long HighestPowerOf10(unsigned long long n) {
    unsigned long long pow10 = 1;
    while (n / pow10 >= 10) {
        pow10 *= 10;
    }
    return pow10;
}

bool IsLexSmaller(unsigned long long a, unsigned long long b) {
    if (a == b) {
        return false;
    }

    unsigned long long powA = HighestPowerOf10(a);
    unsigned long long powB = HighestPowerOf10(b);

    while (powA > 0 && powB > 0) {
        unsigned long long digitA = (a / powA) % 10;
        unsigned long long digitB = (b / powB) % 10;

        if (digitA != digitB) {
            return digitA < digitB;
        }
        powA /= 10;
        powB /= 10;
    }

    // If one number is a prefix of the other (e.g. 4 and 41), the shorter one is smaller
    return powA == 0 && powB > 0;
}

int main() {
    int n;
    std::cin >> n;

    unsigned long long prev;
    std::cin >> prev;

    unsigned long long lexMin = prev;
    int currentLen = 1;
    int maxLen = 1;

    for (int i = 1; i < n; i++) {
        unsigned long long curr;
        std::cin >> curr;

        if (IsLexSmaller(curr, lexMin)) {
            lexMin = curr;
        }

        if (IsLexSmaller(prev, curr)) {
            currentLen++;
            if (currentLen > maxLen) {
                maxLen = currentLen;
            }
        } else {
            currentLen = 1;
        }

        prev = curr;
    }

    std::cout << lexMin << "\n" << maxLen << std::endl;
    return 0;
}
