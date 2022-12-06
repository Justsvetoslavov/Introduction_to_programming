//Solution by Dejan Svetoslavov

int find_last_k_bits_number(int number, int last_k_bits) {
    const int bit_one = 1;
    int bit_mask = 0;
    while (last_k_bits > 0) {
        bit_mask <<= 1;
        bit_mask = bit_mask | bit_one;
        last_k_bits--;
    }

    return number & bit_mask;
}