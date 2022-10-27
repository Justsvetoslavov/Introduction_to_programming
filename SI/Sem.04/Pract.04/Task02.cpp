#include <iostream>

using namespace std;

bool isEven(int num) {
    return (num % 2 == 0);
}

int main()
{
    cout << isEven(2) << endl;
    cout << isEven(1) << endl;
}
