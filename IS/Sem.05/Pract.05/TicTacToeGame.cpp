#include <iostream>
#include <iomanip>

char board[3][3] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };
bool playerXTurn = true;

bool isOccupied(int row, int col) {
    return board[row][col] != ' ';
}

bool isOutOfBounds(int row, int col) {
    return row < 0 || row > 2 || col < 0 || col > 2;
}

bool isNotAvailable(int row, int col) {
    return isOutOfBounds(row, col) || isOccupied(row, col);
}

void enterASymbol(char player) {
    int row, col;
    do {
        std::cout << "It's " << player << "'s turn! Please enter your coordinates in this order: (row, column):" << std::endl;
        std::cin >> row >> col;

        if (!isNotAvailable(--row, --col)) {
            board[row][col] = player;
            break;
        }
        else {
            std::cout << "Sorry, but that space isn't available / doesn't exist! Try again! " << std::endl;
        }
    } while (true);
}

void printOutBoard() {
    std::cout << "\033[;H";
    std::cout << "\033[J";
    std::cout << std::endl;
    std::cout << "     1   2   3 " << std::endl;
    std::cout << std::endl;
    for (short i = 0; i < 3; i++) {
        std::cout << " " << i + 1 << "   " << board[i][0] << " | " << board[i][1] << " | " << board[i][2] << " " << std::endl;

        if (i != 2)
            std::cout << "    ---+---+---" << std::endl;
    }
    std::cout << std::endl;
}

bool aPlayerHasWon(int player) {
    if (board[0][0] + board[1][1] + board[2][2] == (3 * player) ||
        board[0][2] + board[1][1] + board[2][0] == (3 * player))
        return true;

    for (int i = 0; i < 3; i++) {
        if ((board[i][0] + board[i][1] + board[i][2] == (3 * player)) ||
            board[0][i] + board[1][i] + board[2][i] == (3 * player))
            return true;
    }

    return false;
}

int main() {
    printOutBoard();

    for (int i = 0; i < 9; i++) {
        char currentPlayer = playerXTurn ? 'X' : 'O';
        enterASymbol(currentPlayer);
        playerXTurn = !playerXTurn;
        printOutBoard();

        if (aPlayerHasWon(currentPlayer)) {
            std::cout << "A victory for " << currentPlayer << "!" << std::endl;
            return 0;
        }
    }

    std::cout << "Game Over! I guess it's a tie I can't believe that none of you managed to score a triple jesus christ" << std::endl;

    return 0;
}
