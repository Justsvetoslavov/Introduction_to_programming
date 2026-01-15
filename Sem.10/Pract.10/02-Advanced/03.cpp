#include <iostream>

const int MAX_SIZE = 5;
const int FREE_VALUE = 0;
const int FENCE_VALUE = 1;
const int INCLUDED_IN_PATH_VALUE = 2;

int myMin(int a, int b)
{
    return a < b ? a : b;
}

int myMin(int a, int b, int c, int d)
{
    return myMin(myMin(a, b), myMin(c, d));
}

bool isValidPosition(int x, int y)
{
    return 0 <= x && x < MAX_SIZE && 0 <= y && y < MAX_SIZE;
}

void updateShortest(int &currentShortest, int attempt)
{
    if (attempt == -1)
    {
        return;
    }

    if (currentShortest == -1)
    {
        currentShortest = attempt;
        return;
    }

    currentShortest = myMin(currentShortest, attempt);
}

int shortestPath(int labyrinth[MAX_SIZE][MAX_SIZE], int fromX, int fromJ, int toX, int toJ)
{
    if (!isValidPosition(fromX, fromJ) || labyrinth[fromX][fromJ] != FREE_VALUE)
    {
        return -1;
    }

    if (fromX == toX && fromJ == toJ)
    {
        return 1;
    }

    labyrinth[fromX][fromJ] = INCLUDED_IN_PATH_VALUE;

    int shortest = -1;
    updateShortest(shortest, shortestPath(labyrinth, fromX + 1, fromJ, toX, toJ));
    updateShortest(shortest, shortestPath(labyrinth, fromX - 1, fromJ, toX, toJ));
    updateShortest(shortest, shortestPath(labyrinth, fromX, fromJ + 1, toX, toJ));
    updateShortest(shortest, shortestPath(labyrinth, fromX, fromJ - 1, toX, toJ));

    if (shortest != -1)
    {
        shortest++;
    }

    labyrinth[fromX][fromJ] = FREE_VALUE;

    return shortest;
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
        {0, 1, 0, 0, 0},
        {0, 0, 0, 1, 0},
        {0, 1, 0, 1, 0},
    };

    std::cout << shortestPath(labyrinth, 0, 0, 4, 4) << std::endl;
    print(labyrinth);
}