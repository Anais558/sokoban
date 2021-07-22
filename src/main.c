/*
** EPITECH PROJECT, 2021
** str_to_array
** File description:
** array
*/

#include "../include/my.h"

int main(int ac, char **av)
{
    int a;
    char *str;
    int key;
    char **array;
    char **ana;

    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        usage();
        return (0);
    }
    if (ac != 2)
        return (84);
    str = load_map(av[1]);
    count_nbr_O(str);
    array = load_in_array(str);

    initscr();
    refresh();
    window(array, key, str);
}
