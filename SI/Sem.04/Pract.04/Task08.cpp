#include <iostream>

int pow(int num, unsigned int N) {
	int a = 1;
	for (int i = 0; i < N; i++) {
		a *= num;
	}
	return a;
}

int main() {
	std::cout << "enter num and positive power:" << std::endl;
	int num;
	unsigned int N;
	std::cin >> num >> N;
	std::cout << num << " ^ " << N << " = " << pow(num, N);
}