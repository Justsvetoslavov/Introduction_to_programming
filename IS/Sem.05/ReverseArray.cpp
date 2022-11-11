void Swap(int &f, int &s)
{
	int temp = f;
	f = s;
	s = temp;
}

void ReverseArray(int* arr, int size)
{
	for (int i = 0; i < size / 2; i++) {
		Swap(arr[i], arr[size - 1 - i]);
    }
}