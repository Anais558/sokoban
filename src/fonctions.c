/*
** EPITECH PROJECT, 2021
** fonctions.c
** File description:
** functions
*/

#include "../include/my.h"

int count_line(char *str)
{
    int i = 0;
    int j = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n')
            j++;
    }
    return (j);
}

int count_col(char *str)
{
    int i = 0;
    int j = 0;

    for (i = 0; str[i] != '\n'; i++)
    return (i);
}

int count_nbr_O(char *str)
{
    int i = 0;
    int j = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'O')
            j = j + 1;
    }
//    printw("%d\n", j);
    return (j);
}
