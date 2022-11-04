#include <iostream>
using namespace std;

const int SIZE = 30;
int main3()
{
	int number;
	cin >> number;

	int nums[SIZE]{};
	int position = 0;
	while (number > 0) {
		nums[position++] = number % 2;
		number /= 2;
	}

	bool beginOfNumber = false;
	for (int i = SIZE - 1; i >= 0; i--) {
		if (nums[i] == 1) {
			beginOfNumber = true;
		}
		if (beginOfNumber) {
			cout << nums[i];
		}

	}

	return 0;

}