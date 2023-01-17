#include <iostream>
const int MAX_NUM = 3000;
const int MIN_NUM = 0;
int printNLeapYears(int N, int yearNow) {
	if (N == 0) return 0;
	if ((N >= MAX_NUM || N <= MIN_NUM)) {
		return -1;
	}
	if ((yearNow % 4 == 0 && yearNow % 100 != 0) || 
		(yearNow % 100 == 0 && yearNow % 400 == 0)) {
		std::cout << yearNow << " ";
		--N;
	}
	return 0 + printNLeapYears(N, ++yearNow);
}
int main() {
	int N = 0;
	std::cin >> N;
	int errorInput = printNLeapYears(N, N);
	if (errorInput == -1) {
		std::cout << "Invalid input" << std::endl;
	}
}