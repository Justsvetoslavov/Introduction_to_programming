// slow
bool isPowerOfTwoSlow(size_t number) {
    
    while (number % 2 == 0) {
        number /= 2;
    }
    
    return number == 1;
}

// fast
bool isPowerOfTwoFast(size_t number) {
    if(number == 0) {
        return false;
    }
    
    return (number & (number - 1)) == 0;
}