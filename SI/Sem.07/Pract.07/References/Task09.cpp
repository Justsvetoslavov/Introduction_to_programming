#include <iostream>

int inverse(int num) {
	int inversedNum = 0;
	while (num != 0) {
		(inversedNum *= 10) += num % 10;
		num /= 10;
	}
	return inversedNum;
}
int generateLast(int& num, int suffixLen) {
	int suffix = 0;
	for (int i = 0; i < suffixLen; i++) {
		(suffix *= 10) += num % 10;
		num /= 10;
	}
	suffix = inverse(suffix);
	return suffix;
}

void concat(int a, int& b) {
	int bCopy = b;
	int bLen = 0;
	while (b != 0) {
		bLen++;
		b /= 10;
	}
	for (int i = 0; i < bLen; i++) {
		a *= 10;
	}
	b = a + bCopy;
}
int main() {
	int a, b, k;
	std::cin >> a >> b >> k;
	int lastk = generateLast(a, k);
	concat(lastk, b);
	std::cout << a << " " << b;
}