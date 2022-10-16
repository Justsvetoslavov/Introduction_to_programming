

#include <iostream>
using namespace std;
int main()
{
    double a, b, c;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout<< "c: ";
    cin  >> c;
    if (a > 0 && b > 0 && c > 0)
    {
        if (a < b + c && b < a + c && c < a + b)
        {
            cout << "Triangle";
        }
        else { cout << "Not a triangle!"; }
    }
    else { cout << "Not a triangle!"; }
    return 0;
}


