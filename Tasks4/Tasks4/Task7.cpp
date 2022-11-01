#include <iostream>

bool isInTheInterval(int num, int max, int min) {

	return (min <= num && num <= max);
}

int askUser(int from, int to) {
int n;

	do {
		
		std::cin >> n;

	} while (!isInTheInterval(n,to,from));

	return n;
}
