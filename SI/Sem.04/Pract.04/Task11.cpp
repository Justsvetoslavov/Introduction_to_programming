// Task11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
int gcd(int a, int b);
int main()
{
    int a = 0, b = 0, c = 0, d = 0;
    std::cin >> a >> b >> c >> d;
	if (a<=0 || b<=0 || c <= 0 || d <= 0)
	{
		std::cout << "The values must be positive!" << std :: endl;
		return 0;
	}
	std::cout << "The gcd of a and b is: " << gcd(a,b) << std::endl;
	std::cout << "The gcd of c and d is: " << gcd(c,d) << std::endl;
	std::cout << "The gcd a, c, c and d is: " << gcd(gcd(a,b),gcd(c,d)) << std::endl;


}

int gcd(int a, int b)
{
	int rezult = 1;
	while (rezult!=0)
	{
		if (a<b)
		{
			a += b;
			b = a - b;
			a -= b;
		}
		rezult = a % b;
		a = b;
		b = rezult;
	}
	return a;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
