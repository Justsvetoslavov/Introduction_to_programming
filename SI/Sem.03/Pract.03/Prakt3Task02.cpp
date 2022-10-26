
#include <iostream>
using namespace std;
int main()
{
	int n, x, y ;
	cout << "Enter a number : ";
	cin >> n;
	for (int i = 1; i < n; i++)
	{
		x = i;
		y = n - x;
		cout <<"x = "<< x<< " y = " << y << endl;
		
	}
}

