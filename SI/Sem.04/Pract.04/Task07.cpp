bool isNumberInInterval(long long num, long long lowerBound, long long upperBound)
{
	return interval_lower_bound <= num && num <= interval_upper_bound
}

long long askUser(long long from, long long to)
{
	long long number;
	while (std::cin >> number)
	{
		if (isNumberInInterval(number, from, to)) {
			return number;
		}
	}
}
