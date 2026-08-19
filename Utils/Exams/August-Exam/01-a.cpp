// Задача 1 - примерно решение 1
#include <iostream>
using namespace std;

void print_backwards(const char* begin, const char* end) {
    // Прескачаме евентуални водещи разделители.
    while (begin < end && *begin <= 32) {
        ++begin;
    }
    if (begin >= end) {
        return; // диапазонът не съдържа никакви думи
    }

    // Намираме края на първата дума в диапазона.
    const char* wordEnd = begin;
    while (wordEnd < end && *wordEnd > 32) {
        ++wordEnd;
    }

    // Първо решаваме остатъка (всички думи вдясно от текущата).
    print_backwards(wordEnd, end);

    // Проверяваме дали рекурсията вече е извела нещо - ако да,
    // трябва разделящ интервал преди текущата дума.
    const char* afterWord = wordEnd;
    while (afterWord < end && *afterWord <= 32) {
        ++afterWord;
    }
    if (afterWord < end) {
        cout << ' ';
    }

    // Едва сега извеждаме текущата (първа по ред на срещане) дума.
    for (const char* symbol = begin; symbol < wordEnd; ++symbol) {
        cout << *symbol;
    }
}

// Еднопараметрична версия - работи с обикновен C-низ (завършващ на '\0').
void print_backwards(const char* text) {
    const char* end = text;
    while (*end != '\0') {
        ++end;
    }
    print_backwards(text, end);
}

int main() {
    print_backwards("I\tneed a break!");
    cout << endl;
    return 0;
}
