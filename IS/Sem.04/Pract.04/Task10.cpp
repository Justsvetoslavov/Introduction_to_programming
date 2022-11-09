unsigned long long toBinary(unsigned number)
{
	unsigned long long toBinary = 0;
	unsigned long long temp = 1;

	while (number > 0) {
		toBinary += (number % 2) * temp;
		temp *= 10;
		number /= 2;
	}

	return toBinary;
}
