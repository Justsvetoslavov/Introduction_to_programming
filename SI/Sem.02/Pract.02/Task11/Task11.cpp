#include <iostream>

using namespace std;

int main()
{
   int a, b, c, k;
   cout << "Enter three digits: ";
   cin >> a >> b >> c;
   if(a > 9 || b > 9 || c > 9)
   {
      cout << "Invalid input" << endl;
      return 1;
   }
   else
   {
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
   }
   cout << "Your number is: " << a*100 + b*10 + c << endl;
}