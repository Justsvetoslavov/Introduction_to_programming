bool is_second_number_bits_part_of_first_number(int first_number, int second_number) {
    return (first_number & second_number) == second_number;
}