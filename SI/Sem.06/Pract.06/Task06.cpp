int checkUniqueNumber(const int* arr, int size)                 
{
	int uniqueNum = 0;
	for (int i = 0; i < size; i++){
		uniqueNum ^= arr[i];
	}
	return uniqueNum;
}
