#include <iostream>

using namespace std;

int main()
{
   int a, b;
   cout << "Enter two numbers: ";
   cin >> a >> b;
   cout << "The bigger one is: ";
   cout << ((a > b) ? a : b) << endl;
}