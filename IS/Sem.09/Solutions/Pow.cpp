int Power(int a, int n)
{
	if (n == 0) {
		return 1;
	}
		
	if (n & 1 == 0) {
		return power(a * a, n / 2);
	}

	return a * power(a * a, n / 2);
}
