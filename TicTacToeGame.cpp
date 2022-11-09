#include <iostream>
#include <iomanip>

void initializeBoard(int a[3][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            a[i][j] = 0;
        }
    }
}

bool isOccupied(int row, int col, int a[3][3]) {
    return a[row][col] != 0;
}

bool isOutOfBounds(int row, int col) {
    return (row < 0 || row > 2 || col < 0 || col > 2);
}

bool isNotAvailable(int row, int col, int a[3][3]) {
    return (isOutOfBounds(row, col) || isOccupied(row, col, a));
}

void enterASymbol(int a[3][3], int player) {
    int row, col;
    do{
        if(player == 1) std::cout << "It's X turn! Please enter your coordinates: " << std::endl;
        else std::cout << "It's O turn! Please enter your coordinates: " << std::endl;
        std::cin >> row >> col;
        row--;
        col--;
        if(!isNotAvailable(row, col, a)) {
            a[row][col] = player;
            break;
        } else std::cout << "Sorry, but that space isn't available / doesn't exist! Try again! " << std::endl;
    } while(isNotAvailable(row, col, a));
}

char symbol(int a) {
    if(a == 1) return 'X';
    else if(a == -1) return 'O';
    else return ' ';
}

void printOutBoard(int a[3][3]) {
        std::cout << "     1   2   3 " << std::endl;
        std::cout << std::endl;
        std::cout << " 1   " << symbol(a[0][0]) << " | " << symbol(a[0][1]) << " | " << symbol(a[0][2]) << " " << std::endl;
        std::cout << "    ---+---+---" << std::endl;
        std::cout << " 2   " << symbol(a[1][0]) << " | " << symbol(a[1][1]) << " | " << symbol(a[1][2]) << " " << std::endl;
        std::cout << "    ---+---+---" << std::endl;
        std::cout << " 3   " << symbol(a[2][0]) << " | " << symbol(a[2][1]) << " | " << symbol(a[2][2]) << " " << std::endl;
        std::cout << std::endl;
}

bool aPlayerHasWon(int a[3][3], int player) {
    for(int i = 0; i < 3; i++) {
        if(a[i][0] + a[i][1] + a[i][2] == (3 * player)) return true;
        if(a[0][i] + a[1][i] + a[2][i] == (3 * player)) return true;
    }
    if(a[0][0] + a[1][1] + a[2][2] == (3 * player) || a[0][2] + a[1][1] + a[2][0] == (3 * player)) return true;
    return false;
}

int main() {
    int board[3][3];
    initializeBoard(board);

    const int PLAYER_X = 1, PLAYER_O = -1;
    bool playerXTurn = true;
    printOutBoard(board);
    int counter = 0;

    while(counter < 9){
        if(playerXTurn) {
        enterASymbol(board, PLAYER_X);
        playerXTurn = false;
        printOutBoard(board);
        counter++;
        if(aPlayerHasWon(board, PLAYER_X)) {
            std::cout << "A victory for X!" << std::endl;
            return 0;
        } 
        } else {
        enterASymbol(board, PLAYER_O);
        playerXTurn = true;
        printOutBoard(board);
        counter++;
        if(aPlayerHasWon(board, PLAYER_O)) {
            std::cout << "A victory for O!" << std::endl;
            return 0;
        } 
        }
    }
    std::cout << "Game Over! I guess it's a tie I can't believe that none of you managed to score a triple jesus christ" << std::endl;
    return 0;
}