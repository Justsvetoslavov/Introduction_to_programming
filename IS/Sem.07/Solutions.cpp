#include <iostream>

size_t myStrLen(const char* str) {
    size_t index = 0;

    while (str[index] != '\0') {
        index++;
    }

    return index;
}

int myStrCmp(const char* str1, const char* str2) {
    size_t i = 0;

    while (str1[i] == str2[i]) {
        if (str1[i] == '\0'/* && str2[i] == '\0'*/) {
            return 0;
        }

        i++;
    }

    return str1[i] - str2[i] > 0 ? 1 : -1;
}

void myStrCat(const char* str1, const char* str2, char* result) {
    size_t str1Length = myStrLen(str1);
    size_t str2Length = myStrLen(str2);

    for (size_t i = 0; i < str1Length; i++) {
        result[i] = str1[i];
    }

    for (size_t i = 0; i < str2Length; i++) {
        result[str1Length + i] = str2[i];
    }

    result[str1Length + str2Length] = '\0';
}


void myStrCopy(char* dest, const char* source) {
    size_t index = 0;
    while (source[index] != '\0') {
        dest[index] = source[index];
        index++;
    }

    dest[index] = '\0';
}

bool isDigit(char symbol) {
    return '0' <= symbol && symbol <= '9';
}

bool isValidNumber(const char* number) {
    size_t length = myStrLen(number);

    if (length == 0) {
        return false;
    }

    if (length == 1 && number[0] == '-') {
        return false;
    }

    size_t index = number[0] == '-' ? 1 : 0;

    while (index < length)
    {
        if (!isDigit(number[index])) {
            return false;
        }

        index++;
    }

    return true;
}

int myAtoi(const char* number) {
    if (!isValidNumber(number)) {
        return 0;
    }

    bool isNegative = number[0] == '-';
    size_t index = isNegative ? 1 : 0;
    int result = 0;

    while (number[index] != '\0') {
        result = result * 10 + (number[index] - '0');
        index++;
    }

    return isNegative ? -result : result;
}

size_t getCharOccurrencesCount(const char* text, char symbol) {
    size_t occurrences = 0;
    size_t index = 0;
    while (text[index] != '\0') {
        if (text[index] == symbol) {
            occurrences++;
        }
        index++;
    }

    return occurrences;
}

bool searchInText(const char* text, const char* word) {
    size_t textLength = myStrLen(text);
    size_t wordLength = myStrLen(word);

    for (size_t i = 0; i < textLength; i++) {
        if (text[i] == word[0]) {
            bool contains = true;
            i++;
            for (size_t j = 1; j < wordLength; j++) {
                if (text[i] == '\0' || text[i] != word[j]) {
                    contains = false;
                    break;
                }
                i++;
            }

            if (contains) {
                return true;
            }
        }
    }

    return false;
}