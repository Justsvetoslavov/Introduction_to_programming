

#include <iostream>

using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double d = (b * b - (4 * a * c));
    if (d < 0)
    {
        cout << "The quadratic equation has no ral roots!" << endl;
    }
    else if (d == 0)
    {
        double x;
        x = -b / 2 * a;
        cout << "The quadratic equation has 1 real root x = " << x << endl;
    }
    else
    {
        double x1, x2;
        x1 = (-b + sqrt(d)) / 2 * a;
        x2 = (-b - sqrt(d)) / 2 * a;
        cout << "The quadratic equation has 2 real roots x1 = " << x1 
             << " and x2 = " << x2 << endl;
    }

}

