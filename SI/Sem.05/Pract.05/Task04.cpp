#include <iostream>
using namespace std;

const int SIZE = 30;
int main4()
{
	long long number;
	cin >> number;

	int nums[SIZE]{};
	int position = 0;

	while (number > 0) {
		nums[position++] = number % 10;
		number /= 10;
	} //Here, we put the number into an array because we exercies arrays and we can check their values

	bool isPalindrome = true;
	int numberOfIterations = (position + 1) / 2; // Because we check two number in one time
	for (int i = 0; i < numberOfIterations; i++) {
		if (nums[i] != nums[position - i - 1]) {
			isPalindrome = false;
			break;
		}
		// Here we check if the last number is equal to the first and if true we go to the inner indexes
	}

	cout << isPalindrome;
	return 0;

}