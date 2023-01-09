bool is_contained(unsigned number, unsigned short digit) {

    if (number % 10 == digit) return true;
    else if (number == 0) return false;

    return is_contained(number / 10, digit);
    
}