unsigned long long toBinary(unsigned number)
{
	unsigned long long toBinary = 0;
	short digits = 0;
	while (number > 0)
	{
		unsigned long long temp = 1;
		for (size_t i = 0; i < digits; i++) {
			temp *= 10;
		}

		toBinary += (number % 2) * temp;
		digits++;
		number /= 2;
	}

	return toBinary;
}