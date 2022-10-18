#include <iostream>
using namespace std;

int main()
{
    char symbol;
    cout << "Enter a symbol: ";
    cin >> symbol;
    if (symbol >= 'A' && symbol <= 'Z')
    {
        symbol += 32;
        cout << symbol;
    }
    else if (symbol >= 'a' && symbol <= 'z')
    {
        symbol -= 32;
        cout << symbol;
    }
    else
    {
        cout << "Invalid character";
    }

    return 0;
}
