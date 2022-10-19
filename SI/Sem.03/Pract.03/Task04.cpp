#include <iostream>
using namespace std;
int main()
{
	int m, n;
	cin >> m >> n;
	for (int i = 1; i <= m * n;) {
		for (int j = 0; j < n; j++) {
			cout << i << " ";
			i++;
		}
		cout << endl;
	}

}