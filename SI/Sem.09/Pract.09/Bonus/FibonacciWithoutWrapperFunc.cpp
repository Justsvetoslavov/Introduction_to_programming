size_t fibonacci(unsigned int n, size_t* cache = nullptr) {
	if (n == 0 || n == 1) {
		return n;
	}

	// create array only on the first function call of the recursion
	bool arrayCreationIteration = false;
	if (!cache) {
		cache = new size_t[n]();
		arrayCreationIteration = true;
	}

	if (cache[n - 1] == 0) {
		cache[n - 1] = fibonacci(n - 1, cache);
	}

	if (cache[n - 2] == 0) {
		cache[n - 2] = fibonacci(n - 2, cache);
	}
	
	size_t result = cache[n - 1] + cache[n - 2];

	if (arrayCreationIteration) {
		delete[] cache;
	}

	return result;
}
