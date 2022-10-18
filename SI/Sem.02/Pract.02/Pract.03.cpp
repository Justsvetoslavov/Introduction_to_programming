#include <iostream>


using namespace std;

int main()
{
	//ex 3
      int a = 0;
	  int b = 0;
	  cout << "Enter a: ";
	  cin >> a;

	  cout << "Enter b: ";
	  cin >> b;

	  cout << (a < b ? b : a);
}