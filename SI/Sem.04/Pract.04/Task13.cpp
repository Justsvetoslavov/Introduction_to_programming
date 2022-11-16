#include <iostream>
#include <cmath>

//Function to check whether a number is prime
bool IsPrime(int number)
{
	int size = sqrt(number);
	                         
	for (int i = 2; i <= size; i++) {
		if (number % i == 0) {
			return false;
		}
	}

	return true;
}

//Print all prime numbers that are smaller than N
void PrintAllPrimeToNumber(int number) //Interval [1 ; N]
{
	std::cout << "The primes are: \n";

	for (int i = 2; i < number; i++) {
		if (IsPrime(i)) {
			cout << i << endl;
		}
	}
}

//Function whether the number N can be expressed as a sum of two prime numbers
bool CheckSumOfTwoPrimes(int number)
{
	int size = number / 2;
	for (int i = 2; i <= size; i++) {
		if (IsPrime(i) && IsPrime(number - i)) {
			return true; 
		}
	}
	return false;
}