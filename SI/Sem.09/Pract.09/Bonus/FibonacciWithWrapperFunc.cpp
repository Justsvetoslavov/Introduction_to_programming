size_t _fibonacci(unsigned int n, size_t* cache = nullptr) {
	if (n == 0 || n == 1) {
		return n;
	}

	if (cache[n - 1] == 0) {
		cache[n - 1] = _fibonacci(n - 1, cache);
	}

	if (cache[n - 2] == 0) {
		cache[n - 2] = _fibonacci(n - 2, cache);
	}

	return cache[n - 1] + cache[n - 2];
}

size_t fibonacci(unsigned int n) {
	size_t* cache = new size_t[n]();
	size_t result = _fibonacci(n, cache);
	delete[] cache;

	return result;
}