
#include <iostream>

using namespace std;

int main()
{
    char c;
    cin >> c;
    if (!(c >= 'a' && c <= 'z') && !(c >= 'A' && c <= 'Z'))
    {
        cout << "Invalid character!" << endl;
    }
    else
    {
        char newC;
        if (c >= 65 && c <= 90)
        {
            newC = c + 32;
            cout << newC << endl;
        }
        else
        {
            newC = c - 32;
            cout << newC << endl;
        }
    }
}

