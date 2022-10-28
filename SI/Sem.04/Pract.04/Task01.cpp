#include <iostream>

int sum(int n, int m) {
	return n + m;
}
int main() {
	int n, m;
	std::cout << "enter n,m:" << std::endl;
	std::cin >> n >> m;
	std::cout << sum(n, m) << std::endl;
}