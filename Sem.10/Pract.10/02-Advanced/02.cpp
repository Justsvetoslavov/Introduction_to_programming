#include <iostream>

const int MAX_SIZE = 5;
const int FREE_VALUE = 0;
const int FENCE_VALUE = 1;
const int INCLUDED_IN_PATH_VALUE = 2;

bool isValidPosition(int x, int y)
{
    return 0 <= x && x < MAX_SIZE && 0 <= y && y < MAX_SIZE;
}

bool hasPath(int labyrinth[MAX_SIZE][MAX_SIZE], int fromX, int fromJ, int toX, int toJ)
{
    if (!isValidPosition(fromX, fromJ) || labyrinth[fromX][fromJ] != FREE_VALUE)
    {
        return false;
    }

    if (fromX == toX && fromJ == toJ)
    {
        return true;
    }

    labyrinth[fromX][fromJ] = INCLUDED_IN_PATH_VALUE;

    bool result = hasPath(labyrinth, fromX + 1, fromJ, toX, toJ) || hasPath(labyrinth, fromX - 1, fromJ, toX, toJ) || hasPath(labyrinth, fromX, fromJ + 1, toX, toJ) || hasPath(labyrinth, fromX, fromJ - 1, toX, toJ);

    labyrinth[fromX][fromJ] = FREE_VALUE;

    return result;
}

void print(int matrix[MAX_SIZE][MAX_SIZE])
{
    for (size_t row = 0; row < MAX_SIZE; row++)
    {
        for (size_t col = 0; col < MAX_SIZE; col++)
        {
            std::cout << matrix[row][col] << " ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    // 0 - free, we can go there
    // 1 - fence, we can not go there
    // 2 - included in our path for reaching the end(we have already been there)
    int labyrinth[MAX_SIZE][MAX_SIZE] = {
        {0, 1, 0, 0, 0},
        {0, 0, 0, 1, 0},
        {0, 1, 0, 1, 0},
        {0, 1, 0, 1, 0},
        {0, 1, 0, 0, 0},
    };

    std::cout << hasPath(labyrinth, 0, 0, 4, 4) << std::endl;
    print(labyrinth);
}