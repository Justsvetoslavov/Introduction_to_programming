#include <iostream>
//Да се напише функция, която по
//дадени 3 числа - **n**, **m**, **k** разменя **k**-тите
//цифри на **m** и **n**. Ако **k** е повече от дължината на някое от числата, те остават непроменени. <br />
//Вход: 1234 567 2 | Изход : 1634 527 < br / >
//Вход : 1234 567 5 | Изход : 1234 567 < br / >
//
int reverse(int number)
{
	int result = 0;
	int digit;
	while (number != 0)
	{
		digit = number % 10;
		(result *= 10) += digit;
		number /= 10;
	}
	return result;
}
const int MAX_SIZE = 30;

int countOfDigits(int number)
{
	int count = 0;
	int lastDigit = 0;
	while (number != 0) 
	{
		number /= 10;
		++count;
	}
	return count;
}
void reverseNumbers(int n, int m, int k)
{
	int digitsOfN = countOfDigits(n);
	int digitsOfM = countOfDigits(m);
	int arr1[MAX_SIZE] = { 0, };
	int arr2[MAX_SIZE] = { 0, };
	int reverseN = reverse(n);
	int reverseM = reverse(m);
	int i = 0;
	int j = 0;
	while (reverseN > 0)
	{
		arr1[i] = reverseN % 10;
		reverseN /= 10;
		i++;
	}
	
	while (reverseM > 0)
	{
		arr2[j] = reverseM % 10;
		reverseM /= 10;
		j++;
	}
	
	int l = k - 1;
	int temp = arr1[l];
	arr1[l] = arr2[l];
	arr2[l] = temp;
	for (int i = 0; i < digitsOfN; i++)
	{
		std::cout << arr1[i];
	}
	std::cout << std::endl;
	for (int i = 0; i < digitsOfM; i++)
	{
		std::cout << arr2[i];
	}
	
	
}
int main()
{
	int x = 0;
	int y = 0;
	int k = 0;
	std::cin >> x >> y >> k;
	if (k > x || k > y)
	{
		std::cout << x << y;
	}
	reverseNumbers(x, y, k);
	return 0;
}