#include <iostream>

int inverse(int a) {
	int b = 0;
	while (a != 0) {
		b *= 10;
		b += a % 10;
		a /= 10;
	}
	return b;
}
int generateLast(int& a, int k) {
	int lastk = 0;
	for (int i = 0; i < k; i++) {
		lastk *= 10;
		lastk += a % 10;
		a /= 10;
	}
	lastk = inverse(lastk);
	return lastk;
}

void concat(int a, int& b) {
	int b1 = b;
	int blen = 0;
	while (b != 0) {
		blen++;
		b /= 10;
	}
	for (int i = 0; i < blen; i++) {
		a *= 10;
	}
	b = a + b1;
}
int main(){
	int a, b, k;
	std::cin >> a >> b >> k;
	int lastk = generateLast(a, k);
	concat(lastk, b);
	std::cout << a << " " << b;
}