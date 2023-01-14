#include <iostream>

int Min(int a, int b) {
	return a < b ? a : b;
}

int Min(int a, int b, int c) {
	return min(min(a, b), c);
}

int GetMinOperations (size_t N, int* cache)
{
	if (N == 1) 
	{
		return 0;
	}

	if (cache[N] != 0) 
	{
		return cache[N];
	}

	int div3 = INT_MAX;
	int div2 = INT_MAX;
	int s1 = INT_MAX;

	if (N % 3 == 0) 
	{
		div3 = getMinOperations(N / 3, cache);
	}
	if (N % 2 == 0) 
	{
		div2 = getMinOperations(N / 2, cache);
	}
	s1 = getMinOperations(N - 1, cache);

	int result = 1 + min(div3, div2, s1);
	cache[N] = result;
	return result;
}


int GetMinOp(int n) {
	int* cache = new int[n + 1];
	for (size_t i = 0; i < n+1; i++)
	{
		cache[i] = 0;
	}

	int result = getMinOp(n, cache);
	delete[] cache;
	return result;
}

int GetMinOpNoCache(int n) {
	if (n == 1) 
	{
		return 0;
	}

	int div3 = INT_MAX;
	int div2 = INT_MAX;
	int s1 = INT_MAX;

	if (n % 3 == 0) 
	{
		div3 = getMinOp(n / 3);
	}
	if (n % 2 == 0) 
	{
		div2 = getMinOp(n / 2);
	}
	s1 = getMinOp(n - 1);
	
	int result = min(div3, div2, s1) + 1;
	
	return result;
}

int main()
{
	std::cout << GetMinOp(19); //4
}
