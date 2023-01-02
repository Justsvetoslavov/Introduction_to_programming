/*
 * Binary search - way1
 * with argument size
 */
bool BinarySearch(const int* arr, unsigned size, int num)
{	
	if (size == 0) {
		return false;
	}

	unsigned mid = size / 2;

	if (arr[mid] == num) {
		return true;
	}

	if (arr[mid] > num) {
		return BinarySearch(arr, mid, num);
	}
	
	return BinarySearch(arr + mid + 1, size - mid - 1, num);
}

//===========================================================

/* Binary search - way2
 * int l = left - first element
 * int r = right - last element
 */
bool BinarySearch(const int* arr, int l, int r, int num)
{
	int mid = l + (r - 1) / 2;
	
	if (arr[mid] == num) { //found the desired element
		return true;
	}
	
	if (arr[mid] > num) {
		return BinarySearch(arr, l, mid - 1, num);
	}
	
	//arr[mid] < num;
	return BinarySearch(arr, mid + 1, r, num);
}
