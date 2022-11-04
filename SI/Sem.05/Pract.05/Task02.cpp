#include <iostream>
using namespace std;

const int SIZE = 11;
int main2()
{
	int nums[SIZE] = { 10, 1, 5, 10, 20, 9, 2, 100, 200, 7, 5 };

	for (int i = 0; i < SIZE; i++) {
		if (nums[i] % 2 == 0) {

			int position = i - 1;
			while ((nums[position] % 2 == 1) || (nums[position] % 2 == 0 && nums[position] > nums[position + 1]) && position >= 0) {
				int current = nums[position + 1];
				nums[position + 1] = nums[position];
				nums[position] = current;
				position--;

			}
		}
	}

	for (int i = 0; i < SIZE; i++) {
		cout << nums[i] << ' ';
	}

	return 0;

}