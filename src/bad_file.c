/*
** EPITECH PROJECT, 2021
** bad_file.c
** File description:
** check
*/
#include "../include/my.h"

int check_bad_file(char *filepath)
{
    int i = 0;

    while (filepath[i] != '\0') {
        if (filepath[i] != ' ' && \
        filepath[i] != '#' && \
        filepath[i] != 'P' && filepath[i] != '\n' && filepath[i] != 'X')
            exit (84);
        else
            return (0);
        i++;
    }
}
