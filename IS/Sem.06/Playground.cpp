#include <iostream>
#include <bitset>

void print_line(const char* msg) {
    std::cout << msg << std::endl;
}

void print_character(char& character)
{
    std::cout << "Decimal: " << (int) character << std::endl;
    std::bitset<8> x(character);
    std::cout << "Binary: " << x << std::endl;

    std::cout << std::endl;
}

void print_character_before_after_bitwise(char& before, char& after)
{
    print_line("Before");
    std::cout << "Decimal: " << (int) before << std::endl;
    std::bitset<8> x(before);
    std::cout << "Binary: " << x << std::endl;

    print_line("After");
    std::cout << "Decimal: " << (int) after << std::endl;
    std::bitset<8> y(after);
    std::cout << "Binary: " << y << std::endl;

    std::cout << std::endl;
}

void print_character_before_after_bitwise(char& first_before, char& second_before, char& after)
{
    print_line("Before");
    std::bitset<8> first(first_before);
    std::cout << "Binary: " << first << std::endl;
    std::bitset<8> second(second_before);
    std::cout << "Binary: " << second << std::endl;

    print_line("After");
    std::bitset<8> y(after);
    std::cout << "Binary: " << y << std::endl;
    std::cout << "Decimal: " << (int) after << std::endl;

    std::cout << std::endl;
}

int main()
{
    char c = 0b10000000; // -128
    print_character(c);

    char c2 = 0b10000001; // -127
    print_character(c2);

    char c3 = 0b01111111; // 127
    print_character(c3);

    // shift left ---------------------------------------
    {
        print_line("shift left");
        print_line("--------------------");

        char c_shift_left = c << 1;
        print_character_before_after_bitwise(c, c_shift_left);

        c_shift_left = c2 << 1;
        print_character_before_after_bitwise(c2, c_shift_left);

        c_shift_left = c3 << 1;
        print_character_before_after_bitwise(c3, c_shift_left);

        c_shift_left = c << 2;
        print_character_before_after_bitwise(c,c_shift_left);

        c_shift_left = c2 << 2;
        print_character_before_after_bitwise(c2,c_shift_left);

        c_shift_left = c3 << 2;
        print_character_before_after_bitwise(c3,c_shift_left);
    }

    // shift right  ---------------------------------------
    {
        print_line("shift right");
        print_line("--------------------");

        char c_shift_right = c >> 1;
        print_character_before_after_bitwise(c,c_shift_right);

        c_shift_right = c2 >> 1;
        print_character_before_after_bitwise(c2,c_shift_right);

        c_shift_right = c3 >> 1;
        print_character_before_after_bitwise(c3,c_shift_right);

        c_shift_right = c >> 2;
        print_character_before_after_bitwise(c,c_shift_right);

        c_shift_right = c2 >> 2;
        print_character_before_after_bitwise(c2,c_shift_right);

        c_shift_right = c3 >> 2;
        print_character_before_after_bitwise(c3, c_shift_right);
    }

    // bitwise and
    {
        print_line("bitwise AND");
        print_line("--------------------");

        char c_bitwise_and = c & c2;
        print_character_before_after_bitwise(c, c2, c_bitwise_and);

        c_bitwise_and = c & c3;
        print_character_before_after_bitwise(c, c3, c_bitwise_and);

        c_bitwise_and = c2 & c3;
        print_character_before_after_bitwise(c2, c3, c_bitwise_and);
    }

    // bitwise or
    {
        print_line("bitwise OR");
        print_line("--------------------");

        char c_bitwise_or = c | c2;
        print_character_before_after_bitwise(c, c2, c_bitwise_or);

        c_bitwise_or = c | c3;
        print_character_before_after_bitwise(c, c3, c_bitwise_or);

        c_bitwise_or = c2 | c3;
        print_character_before_after_bitwise(c2, c3, c_bitwise_or);
    }

    // bitwise xor
    {
        print_line("bitwise XOR");
        print_line("--------------------");

        char c_bitwise_or = c ^ c2;
        print_character_before_after_bitwise(c, c2, c_bitwise_or);

        c_bitwise_or = c ^ c3;
        print_character_before_after_bitwise(c, c3, c_bitwise_or);

        c_bitwise_or = c2 ^ c3;
        print_character_before_after_bitwise(c2, c3, c_bitwise_or);
    }

    // bitwise not
    {
        print_line("bitwise NOT");
        print_line("--------------------");

        char c_bitwise_not = ~c;
        print_character_before_after_bitwise(c, c_bitwise_not);

        c_bitwise_not = ~c2;
        print_character_before_after_bitwise(c, c_bitwise_not);

        c_bitwise_not = ~c3;
        print_character_before_after_bitwise(c, c_bitwise_not);
    }

    return 0;
}