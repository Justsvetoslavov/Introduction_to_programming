// An optimized version of Bubble Sort
void BubbleSort(int* arr, int n)
{
	bool swapped;
	
	for (size_t i = 0; i < n-1; i++) {
		swapped = false;
		for (size_t j = 0; j < n-i-1; j++) {
			if (arr[j] > arr[j+1]) {
				swap(&arr[j], &arr[j+1]);
				swapped = true;
			}
			
			// If no two elements were swapped by inner loop, then break
			if (swapped == false) {
				break;
			}
		}
    }
}

// Bubble sort - recursive
void BubbleSort(int* arr, int n)
{
	if (n == 1) {
		return;
	}
 
    	int count = 0;
    	// One pass of bubble sort. After this pass, the largest element is moved (or bubbled) to end.
    	for (size_t i = 0; i < n-1; i++) {
        	if (arr[i] > arr[i+1]) {
			swap(&arr[i], &arr[i+1]);
			count++;
       	 	}
	}
	
	// Check if any recursion happens or not. If any recursion is not happen then return
	if (count == 0) {
		return;
	}
	
	// Largest element is fixed, recur for remaining array
	BubbleSort(arr, n-1);
}
