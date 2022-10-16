#include <iostream>

using namespace std;

int main()
{
   int result;
   cout << "Enter a result in %: ";
   cin >> result;
   if (result > 100 || result < 0)
       cout << "Invalid value entered" << endl;
   else if (result >= 90)
       cout << "6+" << endl;
   else if (result >= 80)
       cout << "6" << endl;
   else if (result >= 70)
       cout << "5" << endl;
   else if (result >= 60)
       cout << "4" << endl;
   else if (result >= 40)
       cout << "3" << endl;
   else if (result < 40)
       cout << "2" << endl;
}