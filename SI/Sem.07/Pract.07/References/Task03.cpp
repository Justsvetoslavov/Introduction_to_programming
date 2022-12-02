#include <iostream>

//задача. Да се напише функция *sort3(int& min, int& mid, int& max)*, която приема 3 числа и ги сортира във възходящ ред.
//Вход: 4 5 3 | Изход : 3 4 5


void sort3(int& a, int& b, int& c)
{
	int tempA = a;
	int tempB = b;
	int tempC = c;
	if (a > b)
	{
		b = a;
		a = tempB;
	}
	else if (a > c)
	{
		c = a;
		a = tempC;
	}
	else if (b > c)
	{
		c = b;
		b = tempC;
	}
	
	 
	
}

int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;
	sort3(a, b, c);
	std::cout << a << " " << b << " " << c;
	return 0;
}