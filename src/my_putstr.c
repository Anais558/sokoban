/*
** EPITECH PROJECT, 2021
** hero
** File description:
** ràçgjo
*/

#include "../include/my.h"

void my_putchar(char c);

int my_putstr(char const *str)
{
    int h;
    h = 0;

    while (str[h] != '\0') {
        my_putchar(str[h]);
        h++;
    }
}
