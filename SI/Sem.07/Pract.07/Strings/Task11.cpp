#include <iostream>
using namespace std;
const int MaxLength = 1000;
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
int main()
{
    int UpperCaseDifferance = 'A' - 'a';
    char word[MaxLength];
    char text[MaxLength];
    cin.getline(text, MaxLength);
    cin.getline(word, MaxLength);
    int wordLength = GetLenght(word);
    int textLength = GetLenght(text);
    for (int i = 0; i < textLength; i++)
    {
        int textDiferance = text[i] - word[0];
        if (textDiferance ==0|| textDiferance == UpperCaseDifferance|| textDiferance == -UpperCaseDifferance)
        {
            bool isOut = false;
            for (int j = 0; j < wordLength; j++)
            {
                textDiferance = word[j] - text[i + j];
                if (textDiferance!=0&& textDiferance!=UpperCaseDifferance&& textDiferance!=-UpperCaseDifferance)
                {
                    isOut = true;
                    break;
                }
            }
            if (!isOut)
            {
                Replace(text, i, i + wordLength);
                i += wordLength-1;
            }
        }
    }
    cout << text;
}