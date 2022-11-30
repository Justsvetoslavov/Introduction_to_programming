#include <iostream>

//задача. Да се напише функция *sort3(int& min, int& mid, int& max)*, която приема 3 числа и ги сортира във възходящ ред.
//Вход: 4 5 3 | Изход : 3 4 5
void sort3(int& min, int& mid, int& max)
{
	if (min < mid && mid<max)
	{
		std::cout << min << " " << mid << " " << max;
	}
	else if (min < max && max < mid)
	{
		std::cout << min << " " << max << " " << mid;
	}
	else if (mid < min && min < max)
	{
		std::cout << mid << " " << min << " " << max;
	}
	else if (mid < max && max < min)
	{
		std::cout << mid << " " << max << " " << min;
	}
	else if (max < min && min < mid)
	{
		std::cout << max << " " << min << " " << mid;
	}
	else if (max < mid && mid < min)
	{
		std::cout << max << " " << mid << " " << min;
	}
}
int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;
	sort3(a, b, c);

	return 0;
}