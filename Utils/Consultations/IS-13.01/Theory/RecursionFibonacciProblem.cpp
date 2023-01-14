// Is there a problem with this implementation? 
// Answer: some of the fibonacci numbers are calculated more than once
// What type of recursion is this?
// Answer: Tree recursion
// What will the function return if n = 50?
// Answer: The function will require too much time
size_t fibonacci(unsigned int n) {
	if (n == 0 || n == 1) {
		return n;
	}

	return fibonacci(n - 1) + fibonacci(n - 2);
}

// n - the number we are searching
// cache - pointer to an array of the already calculated fibonacci numbers
size_t _fibonacci(unsigned int n, size_t* cache = nullptr) {
	if (n == 0 || n == 1) { // default case
		return n;
	}

	// if we have not calculated _fibonacci(n - 1)
	// calculate it and then write it in the cache
	if (cache[n - 1] == 0) {
		cache[n - 1] = _fibonacci(n - 1, cache);
	}

	// if we have not calculated _fibonacci(n - 2)
	// calculate it and then write it in the cache
	if (cache[n - 2] == 0) {
		cache[n - 2] = _fibonacci(n - 2, cache);
	}

	// return the sum of the numbers from the cache
	return cache[n - 1] + cache[n - 2];
}

// Wrapper function which manages the creation and the deletion of the cache
size_t fibonacciFast(unsigned int n) {
	// allocated cache
	size_t* cache = new size_t[n]();
	size_t result = _fibonacci(n, cache);

	// delete the allocated cache
	delete[] cache;

	return result;
}