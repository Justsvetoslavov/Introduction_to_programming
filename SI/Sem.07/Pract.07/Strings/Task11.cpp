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
bool FindSubstring(char text[],char substring[],int substringLength,int currentLetter) {
    for (int j = 0; j < substringLength; j++)
    {
        int textDiferance = substring[j] - text[currentLetter + j];
        if (textDiferance != 0 && textDiferance != UpperCaseDifferance && textDiferance != -UpperCaseDifferance)
        {
            return false;
        }
    }
    return true;
}
void ReplacedSubstringInText(char text[],char substring[],int textLength,int substringLength) {
    for (int i = 0; i < textLength; i++)
    {
        int textDiferance = text[i] - substring[0];
        if (textDiferance == 0 || textDiferance == UpperCaseDifferance || textDiferance == -UpperCaseDifferance)
        {
            if (FindSubstring(text, substring, substringLength,i))
            {
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
    cin.getline(text, MaxLength);
    cin.getline(substring, MaxLength);
    int substringLength = GetLenght(substring);
    int textLength = GetLenght(text);
    ReplacedSubstringInText(text, substring,textLength, substringLength);
    cout << text;
}