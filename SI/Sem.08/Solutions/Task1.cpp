#include <iostream>

int* CreateArray(size_t N)
{
	int* arr = new int[N];
	
	for (size_t i = 0; i < N; i++) {
		arr[i] = NULL;
	}

	return arr;
}

void Initialize(int* arr, size_t size)
{
	for (size_t i = 0; i < size; i++) {
		cin >> arr[i];
	}
}

void Print(const int* arr, size_t size)
{
	for (size_t i = 0; i < size; i++) {
		std::cout << arr[i] << ' ';
	}
}

void Free(int* arr)
{
	delete[] arr;
}

int main()
{
	int N; cin >> N;
	int *arr = CreateArray(N);
	Initialize(arr, N);
	Print(arr, N);
	Free(arr);
}
