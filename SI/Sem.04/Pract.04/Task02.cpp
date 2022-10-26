
#include <iostream>

int isEven(int num) {
	if (num % 2==0)
	{
		std::cout << "My number is even.";
	}
	else {
		std::cout << "My number is not even.";
	}
	return num;

}
int main()
{
	int num = 0;
	std::cin >> num;
	std::cout << isEven(num);
}
 //Да се напише функция isEven(int num), която връща дали дадено число е четно или не.