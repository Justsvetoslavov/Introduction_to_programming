bool isPalindrome(const char* array, int leftIndx, int rightIndx)
{
	if (leftIndx >= rightIndx) {
		return true;
	}

	if (array[leftIndx] != array[rightIndx]) {
		return false;
	}

	return isPalindrome(array, leftIndx + 1, rightIndx - 1);
}

