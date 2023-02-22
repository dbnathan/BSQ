/*
** EPITECH PROJECT, 2023
** B-CPE-110-NCE-1-1-BSQ-nathan.de-bock [WSL : Ubuntu]
** File description:
** find_square2
*/

#include "../includes/bsq.h"

square find_largest_square(int** sizes, int rows, int cols)
{
    square max = {0, 0, 0};
    for (int i = 1; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            max.x = (sizes[i][j] > max.size) ? i : max.x;
            max.y = (sizes[i][j] > max.size) ? j : max.y;
            max.size = (sizes[i][j] > max.size) ? sizes[i][j] : max.size;
        }
    }
    return max;
}

square find_square(char** grid, int rows, int cols)
{
    int** sizes = create_sizes_matrix(rows, cols);
    populate_sizes_matrix(grid, sizes, rows, cols);
    square max_square = find_largest_square(sizes, rows, cols);
    return max_square;
}
