#include <cstddef>
#include <iostream>

// Compares two strings lexicographically.
// Returns -1 if first is smaller, 0 if the strings are equal and 1 if first is greater.
// The strings contain only ASCII characters: codes above 127 are negative in a signed char,
// so for them the result would differ from std::strcmp.
int MyStrCmp(const char* first, const char* second) {
    std::size_t i = 0;

    while (first[i] == second[i]) {
        // The characters are equal, so if first has ended, second has ended too
        if (first[i] == '\0') {
            return 0;
        }

        i++;
    }

    return first[i] < second[i] ? -1 : 1;
}

int main() {
    std::cout << MyStrCmp("abc", "abd") << std::endl;     // -1
    std::cout << MyStrCmp("abc", "abc") << std::endl;     // 0
    std::cout << MyStrCmp("abdc", "abd") << std::endl;    // 1, because 'c' > '\0'
    std::cout << MyStrCmp("ab", "abc") << std::endl;      // -1, because '\0' < 'c'
    std::cout << MyStrCmp("Zebra", "apple") << std::endl; // -1, because 'Z' (90) < 'a' (97)

    return 0;
}
