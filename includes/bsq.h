/*
** EPITECH PROJECT, 2023
** BSQ
** File description:
** my
*/

#ifndef MY_bsq_H_
    #define MY_bsq_H_

    #include <unistd.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <fcntl.h>
    #include <sys/types.h>
    #include <sys/stat.h>

    #define MAX_ROWS 10000
    #define MAX_COLS 10000

typedef struct {
    int x;
    int y;
    int size;
} square;

square find_square(char** grid, int rows, int cols);

    void my_putchar(char c);
    int my_putstr(char *str);
    int my_strlen(char *str);
    int my_atoi(char *str);
    int check_invalid_arguments(int argc, char *argv[]);
    square find_square(char** grid, int rows, int cols);
    square find_largest_square(int** sizes, int rows, int cols);
    int** create_sizes_matrix(int rows, int cols);
    void populate_sizes_matrix(char** grid, int** sizes, int rows, int cols);
    char** read_map(char* file_name);
    char** create_map(char* pat_size, char* pattern);
    int my_getnbr(char *str);
    char **my_str_to_word_array(char *str, char *delims);

#endif /* !MY_bsq_H_ */
