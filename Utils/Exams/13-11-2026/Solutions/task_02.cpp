// We cut the number with integer division (/) and remainder (%) by powers of 10:
// 1. The outer loop moves powRight = 10, 100, 1000, ... while n / powRight >= 10,
//    so that rem = n / powRight keeps at least 2 digits for the left and middle parts.
//    The right part is rightPart = n % powRight.
// 2. The inner loop splits rem with powMid = 10, 100, ... while rem / powMid > 0.
//    The middle part is midPart = rem % powMid and the left part is leftPart = rem / powMid.
// 3. Leading zeros in the middle and right parts are handled automatically
//    (e.g. 404 % 100 gives 4 directly).
// There is no fixed ratio between the lengths of the parts: because leading zeros are
// allowed, 9 | 0000018 | 9 is a valid split (9 + 9 = 18), so we try every pair of cuts.

#include <iostream>

// Checks every split of rem into a non-empty left and middle part
bool HasBalancedMiddle(unsigned long long rem, unsigned long long rightPart) {
    // rem / powMid > 0 guarantees a non-empty left part
    for (unsigned long long powMid = 10; rem / powMid > 0; powMid *= 10) {
        unsigned long long midPart = rem % powMid;
        unsigned long long leftPart = rem / powMid;

        if (leftPart + rightPart == midPart) {
            return true;
        }
    }
    return false;
}

bool CanBalanceSplit(unsigned long long n) {
    // n / powRight >= 10 guarantees at least 2 digits for the left and middle parts
    for (unsigned long long powRight = 10; n / powRight >= 10; powRight *= 10) {
        if (HasBalancedMiddle(n / powRight, n % powRight)) {
            return true;
        }
    }
    return false;
}

int main() {
    unsigned long long n;
    std::cin >> n;
    std::cout << (CanBalanceSplit(n) ? "true" : "false") << std::endl;
    return 0;
}
