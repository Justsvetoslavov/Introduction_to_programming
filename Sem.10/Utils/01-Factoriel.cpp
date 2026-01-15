// What will be the result of each function?

// the result will always be 0
// because when N is 1 we should calculate fact with N * fact(--N) 
// --N will give us 0
// => we have to calculate fact(0) so we return 1
// but N * 1 is actually 0 * 1, because N is already decremented
size_t fact(size_t N) {
    if (N == 0) { 
	return 1;
    }

    return N * fact(--N);
}

// Infinite loop - we will always call fact with N
// Because N-- decrements the number after we use it
size_t fact(size_t N) {
    if (N == 0) { 
	return 1;
    }

    return N * fact(N--);
}
