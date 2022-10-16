#include <iostream>

using namespace std;

int main()
{
    char letter;
    cout << "Enter a letter: ";
    cin >> letter;
    if (letter >= 'a' && letter <= 'z')
        cout << "The big letter is " << (char)(letter - 32) << endl;
    else if (letter >= 'A' && letter <= 'Z')
        cout << "The small letter is " << (char)(letter + 32) << endl;
    else cout << "Invalid input" << endl;
}