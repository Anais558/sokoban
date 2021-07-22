/*
** EPITECH PROJECT, 2021
** usage.c
** File description:
** usage*
*/

#include "../include/my.h"

void usage(void)
{
    my_putstr("USAGE\n");
    my_putstr("    ./my_sokoban map\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("     map file representing the warehouse map, \
    containing '#' for walls, \n\t'P' for the player, \
    'X', for boxes and 'O' for storage locations. \n");
}
