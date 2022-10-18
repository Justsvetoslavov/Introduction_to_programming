#include <iostream>


using namespace std;

int main()
{
	//ex6
	double a = 0;
	double b = 0;
	double c = 0;

	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << "Enter c: ";
	cin >> c;
	if (a != 0)
	{
	    double descriminant = b * b - 4 * a * c;
	    if (descriminant < 0)
	    {
	        cout << "The equation do not have real solutions";
	    }
	    else if (descriminant == 0)
	    {
	        double x = -b / (2 * a);
	        cout << "The solution is " << x << endl;
	    }
	    else
	    {
	        double x1 = ((-b + sqrt(descriminant)) / (2 * a));
	        double x2 = ((-b - sqrt(descriminant)) / (2 * a));
	        cout << "The solutions are " << x1 << " and " << x2 << endl;
	    }
	}
	else
	{
	    cout << "a cannot be zero" << endl;
	}
}