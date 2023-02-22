/*
** EPITECH PROJECT, 2023
** BSQ
** File description:
** find_square
*/

#include "../includes/bsq.h"


int min(int a, int b)
{
    return (a < b) ? a : b;
}

void my_calloc(int **sizes, int rows, int cols)
{
    *sizes = (int*) malloc(rows * sizeof(int) * cols);
}

int** create_sizes_matrix(int rows, int cols)
{
    int** sizes = (int**) malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        sizes[i] = (int*) malloc(cols * sizeof(int));
        my_calloc(sizes, rows, cols);
    }
    return sizes;
}

void split_two_function(char **grid, int **sizes, int cols, int i)
{
    for (int j = 0; j < cols; j++) {
        if (grid[i][j] == '.') {
            int left = (j > 0) ? sizes[i][j - 1] : 0;
            int up = (i > 0) ? sizes[i - 1][j] : 0;
            int diagonal = (i > 0 && j > 0) ? sizes[i - 1][j - 1] : 0;
            sizes[i][j] = 1 + min(left, min(up, diagonal));
        } else {
            sizes[i][j] = 0;
        }
    }
}

void populate_sizes_matrix(char** grid, int** sizes, int rows, int cols)
{
    for (int i = 0; i < rows; i++) {
        split_two_function(grid, sizes, cols, i);
    }
}
