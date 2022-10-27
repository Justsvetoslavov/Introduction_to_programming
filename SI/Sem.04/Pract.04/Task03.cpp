#include <iostream>

using namespace std;

bool isPositive(int num) {
    return (num > 0);
}
bool isNegative(int num) {
    return (num < 0);
}

int main()
{
    cout << isPositive(1) << endl;
    cout << isNegative(-1) << endl;
}
