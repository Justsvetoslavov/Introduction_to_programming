bool isPalindrome(int arr[], int length) {
	for (int i = 0; i < length / 2; i++) {
		if (arr[i] != arr[length - 1 - i]) {
			return false;
		}
	}

	return true;
}

bool isPalindromeConcatenation(int arr[], int length) {
	for (int i = 0; i < length; i++) {
		if (isPalindrome(arr, i) && isPalindrome(arr + i, length - i)) {
			return true;
		}
	}

	return false;
}