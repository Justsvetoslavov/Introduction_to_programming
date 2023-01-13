#include <iostream>

const int MaxLength = 1000;
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

bool CheckIfWordIsWordAtTheStart(const char* text, size_t position)
{
    return position == 0 || !(text[position - 1] >= 'A' && text[position - 1] <= 'z');
}

bool CheckIfWordIsWordAtTheEnd(const char* text, size_t position)
{
    return text[position + 1] == '\0' || !(text[position] >= 'A' && text[position] <= 'z');
}

bool FindWord(const char* text, const char* word, size_t wordLength, size_t currentLetter)
{
    for (size_t i = 0; i < wordLength; i++) {
        int textDiferance = word[i] - text[currentLetter + i];
        if (textDiferance != 0 && textDiferance != UpperCaseDifferance && textDiferance != -UpperCaseDifferance) {
            return false;
        }
    }

    return CheckIfWordIsWordAtTheEnd(text, currentLetter + wordLength);
}

void ReplacedWordInText(char* text, const char* word, size_t textLength, size_t wordLength)
{
    for (size_t i = 0; i < textLength; i++) {
        int textDiferance = text[i] - word[0];
        if ((textDiferance == 0 || textDiferance == UpperCaseDifferance || textDiferance == -UpperCaseDifferance) 
            && CheckIfWordIsWordAtTheStart(text, i)) {
            if (FindWord(text, word, wordLength, i)) {
                Replace(text, i, i + wordLength);
                i += wordLength - 1;
            }
        }
    }
}

int main()
{
    char word[MaxLength];
    char text[MaxLength];
    std::cin.getline(text, MaxLength);
    std::cin.getline(word, MaxLength);
    int wordLength = GetLenght(word);
    int textLength = GetLenght(text);
    ReplacedWordInText(text, word, textLength, wordLength);
    std::cout << text;
}
