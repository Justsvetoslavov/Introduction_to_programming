#include <iostream>
using namespace std;
void Print(const int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		std::cout << arr[i] << " ";
	}
}



int main()
{
	int a[20], n, i,b,c,v;
	cin >> n;
	b = n;
	c = 0;
	for (i = 0; n > 0; i++)
	{

		if (n % 2 == 0) {

			if (n == 0)break;
			a[i] = n % 10;
			n /= 10;
		}
		else if (n % 2 != 0) {
			n /= 10;
			i--;

		}
	}
	

	




	for (i = i; b > 0; i++)
	{

		if (b % 2 != 0) {

			if (b == 0)break;
			a[i] = b % 10;
			b /= 10;
		}
		else if (b % 2 == 0) {
			b /= 10;
			i--;

		}
	}


	Print(a, i);
}
	

