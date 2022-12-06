#include <iostream>

//Задача 8.Практикум-Да се напише функция, която приема три естествени числа a, b и k и заменя 
//стойностите на a и b съответно с най-малкото и най-голямото число в интервата [a, b], които имат точно k различни прости делители. 
//Ако няма такива числа в интервала, a и b остават непоменени.

//Вход: 19 32 3 | Изход : 19 30 // 30 is divisible by 2, 3, 5
//Вход : 18 32 1 | Изход : 19 31

bool isPrime(int number)
{
	
	for (int i = 2; i <= number/2 ; i++)
	{
		if (number%2==0)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	return true;
}

int countPrimeDivisors(int number)
{
	int count = 0;
	for (int i = 2; i <= number ; i++)
	{
		if ((number % i==0) && isPrime(i))
		{
			count++;
		}
	}
	return count;
}
void numberWithDivisors(int& numberA, int& numberB, int k)
{
	for (int i = numberA; i <= numberB; i++)
	{
		if (countPrimeDivisors(i) == k)
		{
			numberA = i;
		}
		break;
	}
	for (int j = numberB; j >= numberA; j--)
	{
		if (countPrimeDivisors(j) == k)
		{
			numberB = j;
		}
		break;
	}
	if (numberA > numberB)
	{
		numberB = numberA;
	}
	else
	{
		numberA = numberA;
	}
}
int main()
{
	int a = 0;
	int b = 0;
	int k = 0;
	std::cin >> a >> b >> k;
	if (b < a || k > a || k > b)
	{
		return -1;
	}
	
	numberWithDivisors(a, b, k);
	std::cout << a << " " << b;
	return 0;
}