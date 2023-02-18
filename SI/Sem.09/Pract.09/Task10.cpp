#include <iostream>
const int MIN_NUM = 1;
const int MAX_NUM = 20;
bool isValid(int num) {
	if (num >= MIN_NUM && num <= MAX_NUM) {
		return true;
	}
	else {
		return false;
	}
}
void initializeArr(int * arr, int len) {
	if (arr == nullptr || isValid(len) == false) return;
	for (int i = 0; i < len; i++) {
		std::cin >> arr[i];
	}
}
int index(const int * arr, int len) {
	if (len <= 0 || arr == nullptr) return -1;
	int maxRightestIndex = len - 2;
	if (maxRightestIndex < 1) {
		return -1;
	}
	if (arr[maxRightestIndex] >
	   (arr[maxRightestIndex - 1] + arr[maxRightestIndex + 1]) / 2) {
		return maxRightestIndex;
	}
	return index(arr, --len);
}
int main() {
	int N = 0;
	std::cin >> N;
	if (isValid(N)) {
		int* nums = new int[N];
		initializeArr(nums, N);
		int maxRightestIndex = index(nums, N);
		std::cout << maxRightestIndex << std::endl;
		delete[] nums;
	}
	else {
		std::cout << "Invalid input" << std::endl;
	}
}