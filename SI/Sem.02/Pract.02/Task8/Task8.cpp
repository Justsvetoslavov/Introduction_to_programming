#include <iostream>

using namespace std;

int main()
{
   int num;
   cout << "Arabic numeral: ";
   cin >> num;
   
   cout << "Roman numeral: ";
   for (size_t i = 0; i < num/10; i++)
   {
    cout << 'X';
   }

   num %= 10;
   for (size_t i = 0; i < num/5; i++)
   {
    cout << 'V';
   }

   num %= 5;
   for (size_t i = 0; i < num; i++)
   {
    cout << 'I';
   }
   cout << endl;
}