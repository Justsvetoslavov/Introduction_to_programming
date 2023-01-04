unsigned power(unsigned x, unsigned n)
{
	if (n == 0) {
		return 1;
	}

	if (n % 2 == 1) {
		return x * power(x, n - 1);
	}
	
	unsigned temp = power(x, n / 2);
	return temp * temp;
}
