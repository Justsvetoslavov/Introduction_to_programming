#include <iostream>

void print(char values[3][3]) {
	std::cout << "    1   2   3" << std::endl;
	std::cout << "1   " << values[0][0] << " | " << values[0][1] << " | " << values[0][2] << std::endl;
	std::cout << "   ---+---+---" << std::endl;
	std::cout << "2   " << values[1][0] << " | " << values[1][1] << " | " << values[1][2] << std::endl;
	std::cout << "   ---+---+---" << std::endl;
	std::cout << "3   " << values[2][0] << " | " << values[2][1] << " | " << values[2][2] << std::endl;
}
int main() {
	char values[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			values[i][j] = ' ';
		}
	}
	bool won = false;
	bool turn = true;
	while (!won) {
		print(values);
		if (turn) {
			std::cout << "X turn" << std::endl;
		}
		else {
			std::cout << "O turn" << std::endl;
		}
		int row, col;
		std::cin >> row >> col;
		if (row > 3 || col > 3) {
			continue;
		}
		row--;
		col--;
		if (values[row][col] == ' ') {
			values[row][col] = turn ? values[row][col] = 'X' : values[row][col] = 'O';
			turn = !turn;
		}
		//check for draw
		bool draw = true;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (values[i][j] == ' ') {
					draw = false;
					break;
				}
			}
		}
		if (draw) {
			print(values);
			std::cout << "draw." << std::endl;
			return 0;
		}
		//check for win
		for (int i = 0; i < 3; i++) {
			if (values[i][0] == values[i][1] && values[i][1] == values[i][2] && values[i][0]!=' ') {
				print(values);
				std::cout << values[i][0] << " won!" << std::endl;
				won = true;
				break;
			}
			if (values[0][i] == values[1][i] && values[1][i] == values[2][i] && values[0][i] != ' ') {
				print(values);
				std::cout << values[0][i] << " won!" << std::endl;
				won = true;
				break;
			}
			if (values[1][1] != ' ' && ((values[0][0] == values[1][1] && values[1][1] == values[2][2]) ||
				(values[0][2] == values[1][1] && values[1][1] == values[2][0]))) {
				print(values);
				std::cout << values[1][1] << " won!" << std::endl;
				won = true;
				break;
			}
		}
	}
}