/*
** EPITECH PROJECT, 2021
** ncurse.c
** File description:
** ncurse
*/

#include "../include/my.h"

void window(char **array, int key, char *str)
{
    while (1) {
        clear();
        for (int i = 0; array[i] != NULL; i++) {
            printw(array[i]);
            printw("\n");
        }
        move_P(array, key, str);
        endwin();
    }
}
