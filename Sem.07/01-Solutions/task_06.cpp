#include <iostream>

// Returns the index of the first occurrence of word in text, or -1 if there is none.
// word is not empty.
int SearchInText(const char* text, const char* word) {
    for (int i = 0; text[i] != '\0'; i++) {
        int j = 0;

        // Compare word with the part of text that starts at index i.
        // The loop stops at the first difference, so it never reads past the '\0' of text.
        while (word[j] != '\0' && text[i + j] == word[j]) {
            j++;
        }

        if (word[j] == '\0') {
            return i;
        }
    }

    return -1;
}

int main() {
    std::cout << SearchInText("Hello my friend!", "my") << std::endl; // 6
    std::cout << SearchInText("aaab", "aab") << std::endl;            // 1
    std::cout << SearchInText("abc", "abcd") << std::endl;            // -1

    return 0;
}
