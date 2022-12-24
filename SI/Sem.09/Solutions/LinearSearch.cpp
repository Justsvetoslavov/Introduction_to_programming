//Way - 1
bool linearSearch(const int* arr, unsigned size, int num)
{
	if (size == 0) {
		return false;
	}
	
	return *arr == num || linearSearch(arr + 1, size - 1, num);
}

//==============================================================

//Way - 2
bool linearSearch(const int *arr, int size, int number)
{
	if (size == 0) {
		return false;
	}

	if (arr[size - 1] == number) {
		return true;
	}

	return linearSearch(arr, size - 1, number);
}
