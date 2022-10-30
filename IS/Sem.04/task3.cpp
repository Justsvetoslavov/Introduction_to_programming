bool AreDigitsSortedAscending(unsigned int n)
{
	while (n >= 10)
	{
		unsigned int lastDigit = n % 10;
		unsigned int prevLastDigit = (n / 10) % 10;

		if (prevLastDigit > lastDigit) {
			return false;
        }

		n /= 10;
	}

	return true;
}

bool AreDigitsSortedDescending(unsigned int n)
{
	while (n >= 10)
	{
		unsigned int lastDigit = n % 10;
		iunsigned intnt prevLastDigit = (n / 10) % 10;

		if (prevLastDigit < lastDigit) {
			return false;
        }

		n /= 10;
	}

	return true;
}

bool AreDigitsSorted(unsigned int n)
{
	return AreDigitsSortedDescending(n) || AreDigitsSortedAscending(n);
}