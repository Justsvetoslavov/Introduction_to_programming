#include <iostream>

//Function to check whether a number is prime
bool IsPrime(unsigned number)
{
	unsigned size = sqrt(number);
	                         
	for (unsigned i = 2; i <= size; i++)
	{
		if (number % i == 0) {
			return false;
		}
	}

	return true;
}

//PrimeFactorization 
void PrimeFactor(unsigned number)
{
	for (unsigned i = 2; i <= number; i++) {
		if (IsPrime(i) && number % i == 0) {
			if (i == number) { //last step, no space
				std::cout << i;
			} else {
				std::cout << i << " ";
			}

			number /= i;
			i--;
		}
	}
	std::cout << std::endl;
}
