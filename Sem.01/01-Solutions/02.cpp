#include <iostream>

int main() {
    // 1. Chaining different literal types within a single expression
    std::cout << "--- " << "std::cout Demonstration" << " ---" << '\n';

    // 2. Tabulation (\t) and newline (\n) for table-like formatting
    std::cout << "No.\tName\tMajor\n"
              << "1\tIvan\tComputer Science\n"
              << "2\tMaria\tSoftware Engineering\n\n";

    // 3. Escaping double quotes (\")
    // Without \", the compiler assumes the string terminates early, causing a syntax error
    std::cout << "Quote: \"To be, or not to be!\" - Shakespeare.\n";

    // 4. Escaping backslashes (\\)
    // Without \\, character sequences like \t or \n inside paths are parsed as tabs or newlines!
    std::cout << "File path: C:\\Users\\Nikola\\Desktop\\project.cpp\n";

    // 5. Escaping a single quote (\') and printing the literal text "\n" using \\n
        std::cout << "Single quote character: \'" 
                << " | Literal escape sequence: \\n" 
                << '\n'; // this last one triggers the actual newline

    return 0; // signal to the operating system that the execution was successful
}