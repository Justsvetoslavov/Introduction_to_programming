#include <iostream>

int main()
{
	int a, b, c, d, e;
	std::cin >> a >> b >> c >> d >> e;

    std::cout << ((a <= b && b >= c && c <= d && d >= e) 
			|| (a >= b && b <= c && c >= d && d <= e))
			? "Yes" : "No";

    return 0;
}