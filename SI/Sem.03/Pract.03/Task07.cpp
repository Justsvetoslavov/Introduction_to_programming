#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int a = 1; a <= n; a++) {
		for (int b = a; b <= n; b++) {
			for (int c = b; c <= n; c++) {
				if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) {
					cout << a << " " << b << " " << c << endl;
				}
			}
		}
	}
}