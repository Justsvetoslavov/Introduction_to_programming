#include <iostream>
using namespace std;
int main()
{
	unsigned int m, n;
	int counter = 1;
	cout << "Enter two numbers:"<<endl;
	cin >> m >> n;	
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << counter << " ";
			counter++;
		}
		cout << endl;
	}
	return 0;
}