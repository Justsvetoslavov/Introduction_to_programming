#include <iostream>

bool alone_corner(bool arr[][4], int x, int y, int dimention) {

    if (x - 1 < 0 && y - 1 < 0)
        return arr[x][y + 1] || arr[x + 1][y] || arr[x + 1][y + 1];
    else if (x + 1 >= dimention && y - 1 < 0)
        return arr[x][y + 1] || arr[x - 1][y] || arr[x - 1][y + 1];
    else if (x + 1 >= dimention && y + 1 >= dimention)
        return arr[x][y - 1] || arr[x - 1][y - 1] || arr[x - 1][y];
    else if (x - 1 < 0 && y + 1 >= dimention && x + 1)
        return arr[x][y - 1] || arr[x + 1][y - 1] || arr[x + 1][y];
    else if (x - 1 < 0)
        return arr[x][y - 1] || arr[x][y + 1] || arr[x + 1][y - 1] || arr[x + 1][y] || arr[x + 1][y + 1];
    else if (x + 1 >= dimention)
        return arr[x][y - 1] || arr[x][y + 1] || arr[x - 1][y - 1] || arr[x - 1][y] || arr[x - 1][y + 1];
    else if (y - 1 < 0)
        return arr[x - 1][y] || arr[x + 1][y] || arr[x - 1][y + 1] || arr[x][y + 1] || arr[x + 1][y + 1];
    else if (y + 1 >= dimention)
        return arr[x - 1][y] || arr[x + 1][y] || arr[x - 1][y - 1] || arr[x][y - 1] || arr[x + 1][y - 1];
    else
        return arr[x - 1][y - 1] || arr[x - 1][y] || arr[x - 1][y + 1] || arr[x][y - 1] || arr[x][y + 1] || arr[x + 1][y - 1] || arr[x + 1][y] || arr[x + 1][y + 1];

    
}

bool find_areas(bool arr[][4], int x, int y, int dimention, int &areas_count, int* area_sizes, bool &has_area) {

    if (x >= dimention || x < 0 || y >= dimention || y < 0|| !arr[x][y]) {

        return false;
    }

    if (arr[x][y])
    {
        arr[x][y] = 0;
        area_sizes[areas_count]++;
        if (find_areas(arr, x + 1, y, dimention, areas_count, area_sizes, has_area) ||
            find_areas(arr, x, y + 1, dimention, areas_count, area_sizes, has_area) ||
            find_areas(arr, x - 1, y, dimention, areas_count, area_sizes, has_area) ||
            find_areas(arr, x, y - 1, dimention, areas_count, area_sizes, has_area) ||
            find_areas(arr, x + 1, y - 1, dimention, areas_count, area_sizes, has_area) ||
            find_areas(arr, x + 1, y + 1, dimention, areas_count, area_sizes, has_area) ||
            find_areas(arr, x - 1, y - 1, dimention, areas_count, area_sizes, has_area) ||
            find_areas(arr, x - 1, y + 1, dimention, areas_count, area_sizes, has_area))
                has_area = true;        
        return true;
    }

    return has_area;

}

int main() {

    bool arr[4][4] = { {1, 1, 1, 1},
                      {1, 0, 0, 0},
                      {0, 0, 1, 0},
                      {0, 1, 0, 0} };

    int area_sizes[4]{0};
    int areas_count = 0;
    bool has_area = false;
    for (size_t i = 0; i < 4; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            if (arr[i][j] == 1)
            {
                if (alone_corner(arr, i, j, 4)){
                    if(find_areas(arr, i, j, 4, areas_count, area_sizes, has_area))
                        areas_count++;
                }
                else {
                    arr[i][j] == 0;
                    continue;
                }
            }
        }
    }
    
    std::cout << "Areas count: " << areas_count << '\n';
    std::cout << "Area sizes: ";
    for (size_t i = 0; i < areas_count; i++)
    {
        std::cout << area_sizes[i] << " ";
    }
    return 0;
}