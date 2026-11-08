#include <cctype>
#include <iostream>

using namespace std;

// Custom-made functions
void toUpperCustom(char& c) {
    if (c >= 'a' && c <= 'z')
        c -= ('a' - 'A');
}

void toLowerCustom(char& c) {
    if (c >= 'A' && c <= 'Z')
        c += ('a' - 'A');
}

int main() {
    // Custom-made functions examples
    char ch1 = 'a';
    char ch2 = 'B';

    // Custom-made functions
    toUpperCustom(ch1);
    toLowerCustom(ch2);

    cout << "Custom: " << ch1 << " " << ch2 << endl;

    // STL functions example
    char ch3 = 'a';
    char ch4 = 'B';

    // STL functions
    ch3 = toupper(ch3);
    ch4 = tolower(ch4);

    cout << "STL:    " << ch3 << " " << ch4 << endl;

    return 0;
}
