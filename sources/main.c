/*
** EPITECH PROJECT, 2023
** BSQ
** File description:
** main
*/

#include "../includes/bsq.h"

void display_map(char **map, int rows)
{
    for (int i = 1; i <= rows; i++) {
        write(1, map[i], my_strlen(map[i]));
        my_putchar('\n');
    }
}

void fill_square(char** map, square square)
{
    for (int i = square.x - square.size + 1; i <= square.x; i++)
        for (int j = square.y - square.size + 1; j <= square.y; j++)
        map[i][j] = 'x';
}

int main(int argc, char* argv[])
{
    if (check_invalid_arguments(argc, argv) == 84)
        return 84;
    char **map = argc == 2 ? read_map(argv[1]) : create_map(argv[1], argv[2]);

    if (map == NULL)
        return 84;
    int rows = my_getnbr(map[0]);
    int cols = 0;
    for (int i = 1; map[i]; cols++, i++);
    square max_square = find_square(map, rows, cols);
    fill_square(map, max_square);
    display_map(map, rows);
    return 0;
}
