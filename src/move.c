/*
** EPITECH PROJECT, 2021
** move.c
** File description:
** move
*/

#include "../include/my.h"

int move_P(char **array, int c, char *str)
{
    int i = get_pos(array)[0];
    int j = get_pos(array)[1];

    keypad(stdscr, true);
    c = getch();
    if (c == ' ') {
        endwin();
        exit(1);
    } else if (c == KEY_RIGHT) {
        move_right(array, i, j, str);
    }
    else if (c == KEY_LEFT) {
        move_left(array, i, j, str);
    }
    else if (c == KEY_UP) {
        move_up(array, i, j, str);
    }
    else if (c == KEY_DOWN) {
        move_down(array, i, j, str);
    }
}

int move_right(char **array, int i, int j, char *str)
{
    char **ana = load_in_array(str);

    if (array[i][j] == 'P' && array[i][j + 1] == 'X' && array[i][j + 2] != '#' \
    && array[i][j + 2] != 'X') {
        if (ana[i][j] == 'O')
            array[i][j] = 'O';
        else
            array[i][j] = ' ';
        array[i][j + 1] = 'P';
        array[i][j + 2] = 'X';
        array[i][j++];
    } else if (array[i][j] == 'P' && array[i][j + 1] != 'X' && \
    array[i][j + 1] != '#') {
        if (ana[i][j] == 'O')
            array[i][j] = 'O';
        else
            array[i][j] = ' ';
        array[i][j + 1] = 'P';
        array[i][j++];
    }
}

int move_left(char **array, int i, int j, char *str)
{
    char **ana = load_in_array(str);

    if (array[i][j] == 'P' && array[i][j - 1] == 'X' && array[i][j - 2] != '#' \
    && array[i][j + 2] != 'X') {
        if (ana[i][j] == 'O')
            array[i][j] = 'O';
        else
            array[i][j] = ' ';
        array[i][j - 1] = 'P';
        array[i][j - 2] = 'X';
        array[i][j--];
    } else if (array[i][j] == 'P' && array[i][j - 1] != 'X' && \
    array[i][j - 1] != '#') {
        if (ana[i][j] == 'O')
            array[i][j] = 'O';
        else
            array[i][j] = ' ';
        array[i][j - 1] = 'P';
        array[i][j--];
    }
}

int move_up(char **array, int i, int j, char *str)
{
    char **ana = load_in_array(str);

    if (array[i][j] == 'P' && array[i - 1][j] == 'X' && array[i - 2][j] != '#' \
    && array[i - 2][j] != 'X') {
        if (ana[i][j] == 'O')
            array[i][j] = 'O';
        else
            array[i][j] = ' ';
        array[i - 1][j] = 'P';
        array[i - 2][j] = 'X';
        array[i--][j];
    } else if (array[i][j] == 'P' && array[i - 1][j] != 'X' \
    &&  array[i - 1][j] != '#') {
        if (ana[i][j] == 'O')
            array[i][j] = 'O';
        else
            array[i][j] = ' ';
        array[i - 1][j] = 'P';
        array[i--][j];
    }
}

int move_down(char **array, int i, int j, char *str)
{
    char **ana = load_in_array(str);

    if (array[i][j] == 'P' && array[i + 1][j] == 'X' && array[i + 2][j] != '#' \
    && array[i + 2][j] != 'X') {
        if (ana[i][j] == 'O')
            array[i][j] = 'O';
        else
            array[i][j] = ' ';
        array[i + 1][j] = 'P';
        array[i + 2][j] = 'X';
        array[i++][j];
    } else if (array[i][j] == 'P' && array[i + 1][j] != 'X' \
    &&  array[i + 1][j] != '#') {
        if (ana[i][j] == 'O')
            array[i][j] = 'O';
        else
            array[i][j] = ' ';
        array[i + 1][j] = 'P';
        array[i++][j];
    }
}
