//Solution by Georgi Teziev

int findLastKBitsNumber(int number, int k) {
	int x = 1;

	for (int i = 0; i < k; i++) {
		x <<= 1;
	}
	x--; // make all ones
    
	return number & a;
}