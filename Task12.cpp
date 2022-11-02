

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
	bool isDevisibl=true;

	while (isDevisibl==true)
	{
		if (n%2==0)
		{
			n /= 2;
			if (n==2)
			{
				isDevisibl = true;
				break;
			}
		}
		else
		{
			isDevisibl = false;
		}
	}
	if (isDevisibl)
	{
		cout << "true";
	}
	else
	{
		cout << "false";
	}
}


