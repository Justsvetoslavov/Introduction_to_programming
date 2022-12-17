#include <iostream>

const int MaxLength = 1024;
const int UpperCaseDifferance = 'A' - 'a';

int GetLenght(const char* str)
{
    size_t index = 0;
    while (str[index] != '\0') {
        index++;
    }

    return index;
}

void Replace(char* str, size_t start, size_t end)
{
    for (size_t i = start; i < end; i++) {
        str[i] = '*';
    }
}

bool FindSubstring(const char* text,const char* substring, size_t substringLength, size_t currentLetter)
{
    for (size_t j = 0; j < substringLength; j++) {
        int textDiferance = substring[j] - text[currentLetter + j];

        if (textDiferance != 0 && textDiferance != UpperCaseDifferance && textDiferance != -UpperCaseDifferance) {
            return false;
        }
    }
    return true;
}

void ReplacedSubstringInText(char* text,const char* substring, size_t textLength, size_t substringLength) {
    for (size_t i = 0; i < textLength; i++) {
        int textDiferance = text[i] - substring[0];
        if (textDiferance == 0 || textDiferance == UpperCaseDifferance || textDiferance == -UpperCaseDifferance) {
            if (FindSubstring(text, substring, substringLength, i)) {
                Replace(text, i, i + substringLength);
                i += substringLength - 1;
            }
        }
    }
}

int main()
{
    char substring[MaxLength];
    char text[MaxLength];
    std::cin.getline(text, MaxLength);
    std::cin.getline(substring, MaxLength);
    int substringLength = GetLenght(substring);
    int textLength = GetLenght(text);
    ReplacedSubstringInText(text, substring, textLength, substringLength);
    std::cout << text;
}
