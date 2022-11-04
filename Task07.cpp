#include <iostream>
using namespace std;

int askUser(int from, int to) {
    int num;
    cin >> num;

    if (num > from && num < to) {
        return num;
    }
    else {
        while (num <= from || num >= to) {
            cout << "?\n";
            cin >> num;
        }
    }
}


int main()
{

    askUser(1, 6);


}