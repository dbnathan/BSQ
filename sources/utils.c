/*
** EPITECH PROJECT, 2023
** BSQ
** File description:
** utils
*/

#include "../includes/bsq.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char *str)
{
    write(1, str, my_strlen(str));
}

int my_strlen(char *str)
{
    int i = 0;
    for (; str[i] != '\0'; i++);
    return (i);
}

int my_atoi(char *str)
{
    int i = 0;
    int nb = 0;
    for (; str[i] != '\0'; i++)
        nb = nb * 10 + str[i] - '0';
    return (nb);
}

int my_getnbr(char *str)
{
    int i = 0;
    int nb = 0;
    for (; str[i] != '\0'; i++)
        nb = nb * 10 + str[i] - '0';
    return (nb);
}
