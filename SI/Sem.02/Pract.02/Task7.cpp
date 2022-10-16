

#include <iostream>
using namespace std;

int main()
{
    char symbol;
    cout << "Enter a symbol: ";
    cin >> symbol;
    if (symbol >= 65 && symbol <= 90)
    {
        symbol += 32;
        cout << symbol;
    }
    else if (symbol >= 97 && symbol <= 122)
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
