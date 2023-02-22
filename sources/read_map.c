/*
** EPITECH PROJECT, 2023
** BSQ
** File description:
** readmap
*/

#include "../includes/bsq.h"

char **read_map(char *file_name)
{
    int fd = open(file_name, O_RDONLY);
    struct stat st;
    stat(file_name, &st);

    if (fd == -1 || st.st_size == 0) {
        return NULL;
    }

    char *buffer = malloc(sizeof(char) * (st.st_size + 1));
    read(fd, buffer, st.st_size);
    buffer[st.st_size] = '\0';
    return (my_str_to_word_array(buffer, "\n"));
}

char** create_map(char* pat_size, char* pattern)
{
    int size = my_getnbr(pat_size);
    char** map = malloc(sizeof(char*) * (size + 1) + 1);
    int k = 0;
    map[0] = malloc(sizeof(char) * (my_strlen(pat_size) + 1));
    map[0] = pat_size;
    map[0][my_strlen(pat_size)] = '\0';
    for (int i = 1; i <= size; i++) {
        map[i] = malloc(sizeof(char) * size + 1);
        for (int j = 0; j < size; j++) {
            map[i][j] = pattern[k % my_strlen(pattern)];
            k++;
        }
        map[i][size] = '\0';
    }
    map[size + 1] = NULL;
    return map;
}
