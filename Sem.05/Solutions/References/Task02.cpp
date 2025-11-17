#include <iostream>
using namespace std;

void toUpper(char& c)
{
    if(c >= 'a' && c <= 'z')
        c -= 'a' + 'A';
}

void toLower(char& c)
{
    if(c >= 'A' && c <= 'Z')
        c += 'A' + 'a';
}

int main()
{
    char ch1 = 'a';
    char ch2 = 'B';
    toUpper(ch1);
    toLower(ch2);
    cout << ch1 << " " << ch2 << endl; // A b
    return 0;
}
