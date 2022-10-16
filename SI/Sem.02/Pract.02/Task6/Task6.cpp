#include <iostream>

using namespace std;

int main()
{
   double a, b, c, D;
   cout << "Enter the coefficient of a quadratic equation: ";
   cin >> a >> b >> c;
   D = sqrt(b * b - 4 * a * c);
   double x1 = (-b + D) / (2 * a);
   double x2 = (-b - D) / (2 * a);
   cout << "The roots of the equation are: " << x1 << " and " << x2 << endl;
}