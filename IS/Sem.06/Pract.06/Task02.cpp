//Solution by Georgi Terziev

int countOnes(int number) {
	int x = 1;

	while (!(number & x)) {
		x <<= 1;
	}

	return number ^ x;
}
