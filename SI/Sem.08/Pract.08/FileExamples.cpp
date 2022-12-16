#include <iostream>
#include <fstream>

const char UPPER_FOLDER[] = "../test.txt";

const char FILE_NAME[] = "PractFiles.cpp";

const int BUFFER_SIZE = 1024;

// read the source code from your cpp and print in console
void printSourceCode() {
	std::ifstream in(FILE_NAME);

	if (!in.is_open()) {
		std::cout << "Error";
		return -1;
	}
	
	while (!in.eof()) {
		char buffer[BUFFER_SIZE];
		in.getline(buffer, BUFFER_SIZE);
		std::cout << buffer;
	}

	in.close();
}

void readCharArrayWithSpaces() {
	std::ofstream out(FILE_NAME);
	
	char test[] = "abc de";
	out << test;

	out.close();

	std::ifstream in(FILE_NAME);

	char test2[BUFFER_SIZE];
	in.getline(test2, BUFFER_SIZE);

	in.close();
}
