#include <iostream>
using namespace std;
const int MaxLength = 1000;
const int UpperCaseDifferance = 'A' - 'a';
int GetLenght(char* str) {
    int length = 0;
    while (*str)
    {
        length++;
        str++;
    }
    return length;
}
void Replace(char* str, int start, int end) {
    for (int i = start; i < end; i++)
    {
        str[i] = '*';
    }
}
bool CheckIfWordIsWordAtTheStart(char text[],int position) {
    return position == 0 || !(text[position - 1] >= 'A' && text[position - 1] <= 'z');
}
bool CheckIfWordIsWordAtTheEnd(char text[],int position) {
    return text[position + 1] == '\0' || !(text[position ] >= 'A' && text[position ] <= 'z');
}
bool FindWord(char text[], char word[], int wordLength, int currentLetter) {
    for (int j = 0; j < wordLength; j++)
    {
        int textDiferance = word[j] - text[currentLetter + j];
        if (textDiferance != 0 && textDiferance != UpperCaseDifferance && textDiferance != -UpperCaseDifferance)
        {
            return false;
        }
    }
    if (CheckIfWordIsWordAtTheEnd(text,currentLetter+wordLength))
    {
        return true;
    }
    return false;
}

void ReplacedWordInText(char text[], char word[], int textLength, int wordLength) {
    for (int i = 0; i < textLength; i++)
    {
        int textDiferance = text[i] - word[0];
        if ((textDiferance == 0  || textDiferance == UpperCaseDifferance || textDiferance == -UpperCaseDifferance) && CheckIfWordIsWordAtTheStart(text,i))
        {
            if (FindWord(text, word, wordLength, i))
            {
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
    cin.getline(text, MaxLength);
    cin.getline(word, MaxLength);
    int wordLength = GetLenght(word);
    int textLength = GetLenght(text);
    ReplacedWordInText(text, word, textLength, wordLength);
    cout << text;
}