#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double coefA, coefB, coefC;
	cin >> coefA >> coefB >> coefC;
	double D = coefB * coefB - 4 * coefA * coefC;
	if (D < 0)
	{
		cout << "D is less than 0";
	}
	else if(D == 0)
	{
		double root;
		root =  ( - coefB ) / (2 * coefA);
		cout << "The root of the equation is " << root << endl;
	}
	else
	{
		double root1, root2;
		root1 = ((-coefB) + sqrt(D)) / 2 * coefA;
		root2 = ((-coefB) - sqrt(D)) / 2 * coefA;
		cout << "The roots of the equation are " << root1 << " and " << root2 << endl;

	}
	return 0;
}