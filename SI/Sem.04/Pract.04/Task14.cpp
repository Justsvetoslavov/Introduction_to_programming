long long SumOfDigits(long long n) {
	long long sumOfDigits = 0;
	while (n != 0) {
		sumOfDigits += n % 10;
		n /= 10;
	}
	return sumOfDigits;
}

int main()
{
	long long n;
	std::cout << "Enter a number: " << std::endl;
	std::cin >> n;
	
	while (n >= 10) {
		std::cout << n << " -> ";
		n = sumOfDigits(n);
	}
	std::cout << n << std::endl;
	
	return 0;
}
