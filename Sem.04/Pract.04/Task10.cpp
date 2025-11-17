long long pow(int num, unsigned N)
{
	long long result = 1;

	for (unsigned i = 0; i < N; i++) {
		result *= num;
	}

	return result;
}
