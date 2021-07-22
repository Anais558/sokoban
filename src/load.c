/*
** EPITECH PROJECT, 2021
** load.c
** File description:
** load map
*/
#include "../include/my.h"

char **load_in_array(char *str)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int a = count_line(str);
    char **arr = malloc(sizeof(char *) * (count_line(str) + 1));

    for (i = 0; i < (count_line(str) + 1); i++)
        arr[i] = malloc(sizeof(char) * count_col(str) + 50);
    for (i = 0; i < (count_line(str) + 1); i++) {
        for (j = 0; j < (count_col(str) + 50) && str[k] != '\0'; j++, k++) {
            if (str[k] == '\n')
                break;
            arr[i][j] = str[k];
        }
        k++;
    }
    arr[i] = NULL;
    return (arr);
}

char *load_map(char const *filepath)
{
    struct stat ana;
    int a;
    int f = 0;
    int i = 0;
    char *buffer;

    stat(filepath, &ana);
    a = open(filepath, O_RDONLY);
    if (a == -1)
        exit (84);
    f = ana.st_size;
    buffer = malloc(sizeof(char) * f);
    read(a, buffer, f);
    check_bad_file(buffer);
    return (buffer);
}
