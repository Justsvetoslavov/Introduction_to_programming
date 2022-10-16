#include <iostream>

using namespace std;

int main()
{
   int a, b, c;
   cout << "Enter values for the sides of a triangle: ";
   cin >> a >> b >> c;
   if (a + b > c && a + c > b && b + c > a)
       cout << "You've entered a valid triangle" << endl;
   else cout << "There's no triangle with such sides" << endl;
}