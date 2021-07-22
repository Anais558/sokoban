/*
** EPITECH PROJECT, 2021
** positions.c
** File description:
** positions
*/

#include "../include/my.h"

int *get_pos(char **array)
{
    int i = 0;
    int j = 0;
    int x, y;
    int *ana = malloc(sizeof(char*) * 10);

    for (i = 0; array[i] != NULL; i++) {
        for (j = 0; array[i][j] != '\0'; j++) {
            if (array[i][j] == 'P') {
                x = i;
                y = j;
            }
        }
    }
    ana[0] = x;
    ana[1] = y;
    return(ana);
}

int get_pos_i(char **array)
{
    int i = 0;
    int j = 0;
    int x;

    for (i = 0; array[i] != NULL; i++) {
        for (j = 0; array[i][j] != '\0'; j++) {
            if (array[i][j] == 'P') {
                x = i;
            }
        }
    }
    return (x);
}

int get_pos_j(char **array)
{
    int i = 0;
    int j = 0;
    int y;

    for (i = 0; array[i] != NULL; i++) {
        for (j = 0; array[i][j] != '\0'; j++) {
            if (array[i][j] == 'P') {
                y = j;
            }
        }
    }
    return (y);
}
