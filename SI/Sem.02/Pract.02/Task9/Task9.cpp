#include <iostream>

using namespace std;

int main()
{
   int a, b, c, k;
   cout << "Enter three numbers: ";
   cin >> a >> b >> c;
   if(b > a) 
   {
    k = a;
    a = b;
    b = k;
   }
   if(c > a)
   {
    k = a;
    a = c;
    c = k;
   }
   if(c > b)
   {
    k = b;
    b = c;
    c = k;
   }
   cout << "The numbers sorted are: " << a << " " << b << " " << c << endl;
}