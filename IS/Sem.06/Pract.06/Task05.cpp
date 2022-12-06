//Solution by Georgi Terziev

int f(int n, int k) {
	while (n != 0) {
		if ((n & k) == k) {
			return true;
		}

		n >>= 1;
	}

	return false;
}
