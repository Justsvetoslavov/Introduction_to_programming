#include <iostream>

using namespace std;

int main()
{
   int year;
   cout << "Enter an year: ";
   cin >> year;
   cout << ((year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
       ? "The entered is a leap year"
       : "The entered is not a leap year") << endl;
}