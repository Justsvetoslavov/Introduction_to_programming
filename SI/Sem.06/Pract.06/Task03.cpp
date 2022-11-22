#include <iostream>
using namespace std;
int whereIsTheFirstRightOne(int num)
{
	int rem = num % 2;
	int i = 0;
	while(num != 0)
	{
		if ( rem == 1)
		{
			return i;
		}
		i++;
		num >>= 1;
		rem = num % 2;
	}
}
int main()
{
	cout << "Enter a number: ";
	int num;
	cin >> num;
	int n = whereIsTheFirstRightOne(num);
	cout << (num&~(1 << n));
    return 0;
}