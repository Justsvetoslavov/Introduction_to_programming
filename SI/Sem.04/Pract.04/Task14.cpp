long long SumOfDigits(long long n) {
	long long sumOfDigits = 0;
	while (n != 0) {
		sumOfDigits += n % 10;
		n /= 10;
	}
	return sumOfDigits;
}