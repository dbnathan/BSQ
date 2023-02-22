/*
** EPITECH PROJECT, 2023
** BSQ
** File description:
** error_manage
*/

#include "../includes/bsq.h"

int check_argc_3(char **argv)
{
    for (int i = 0; argv[1][i]; i++) {
        if (argv[1][i] < '0' || argv[1][i] > '9')
            return (84);
    }
    if (my_getnbr(argv[1]) <= 0)
        return (84);
    for (int i = 0; argv[2][i]; i++) {
        if (argv[2][i] != '.' && argv[2][i] != 'o')
            return (84);
    }
    return (0);
}

int check_invalid_arguments(int argc, char *argv[])
{
    if (argc != 2 && argc != 3)
        return (84);
    if (argc == 3)
        return check_argc_3(argv);
    return (0);
}
