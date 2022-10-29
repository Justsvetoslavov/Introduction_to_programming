#include <iostream>
using namespace std;
int GCD(int a,int b)
{
    if (b > a)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    while (b > 0)
    {
        int current = a % b;
        a = b;
        b = current;
    }
    return a;
}
int main()
{
    int a, b, c, d;
    cout << "Enter a, b, c, d:";
    cin >> a >> b >> c >> d;
    cout << "GCD of a and b is:" << GCD(a, b) << endl;
    cout << "GCD of c and d is:" << GCD(c, d) << endl;
    cout << "GCD of a, b, c and d is:" << GCD(GCD(a, b), GCD(c, d));  //????
    return 0;
}

