#include <iostream>
using namespace std;
int main()
{
    cout << "size:" << endl;
    int size;
    cin >> size;
    cout << "symbol: " << endl;
    char s;
    cin >> s;

    //top part
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            cout << " ";
        }
        for (int j = 0; j < i * 2 + 1; j++) {
            cout << s;
        }
        cout << endl;
    }
    //bottom part
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << " ";
        }
        for (int j = 0; j < size * 2 - 2 * i - 3; j++) {
            cout << s;
        }
        cout << endl;
    }
}