int Reverse(unsigned int n)
{
	unsigned int result;
    short lastDigit;

	while (n != 0)
	{
		lastDigit = n % 10;
		(result *= 10) += lastDigit;
		n /= 10;
	}

	return result;
}

bool IsPalindrome(unsigned int n)
{
	return n == reverse(n);
}  