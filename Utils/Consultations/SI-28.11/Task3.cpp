bool isPalindrome(const int* arr, size_t length) {
	for (size_t i = 0; i < length / 2; i++) {
		if (arr[i] != arr[length - 1 - i]) {
			return false;
		}
	}

	return true;
}

bool isPalindromeConcatenation(const int* arr, size_t length) {
	for (size_t i = 0; i < length; i++) {
		if (isPalindrome(arr, i) && isPalindrome(arr + i, length - i)) {
			return true;
		}
	}

	return false;
}