

#include <iostream>

using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;
    if (a > b)
    {
        cout << "a is larger than b" << endl;
    }
    else if (a == b)
    {
        cout << "a is equal to b" << endl;
    }
    else 
    {
        cout << "b is larger than a" << endl;
    }
}

