#include <iostream>

using namespace std;

int main()
{
/*	int a, b;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;

	int temp = a;
	a = b;
	b = temp;

	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	return 0; */
	
	//10
    double ak, bk, ck;
    cout << "a = ";
    cin >> ak;
    cout << "b = ";
    cin >> bk;
    cout << "c = ";
    cin >> ck;

    double x1, x2;
    x2 = ( - bk + sqrt(bk * bk - 4 * ak * ck)) / 2 * ak;
    x1 = (- bk - sqrt(bk * bk - 4 * ak * ck))  / 2 * ak;

    cout << "x1 = " << x1 << ", x2 = " << x2 << "\n\n";
	
	return 0;
}
