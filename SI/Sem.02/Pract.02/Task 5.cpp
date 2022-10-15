

#include <iostream>

using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    if ((a + b) > c && (a + c) > b && (b + c) > a)
    {
        cout << "the triangle is valid" << endl;
    }
    else
    {
        cout << "the triangle is not valid" << endl;
    }

}

