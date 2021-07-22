/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** header
*/
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <ncurses.h>

void usage(void);
int my_putstr(char const *str);
void my_putchar(char c);
char **load_in_array(char *str);
char *load_map(char const *filepath);
int count_line(char *str);
int my_strlen(char const *str);
int count_col(char *str);
int move_P(char **array, int c, char *str);
int get_pos_i(char **array);
int *get_pos(char **array);
int get_pos_j(char **array);
int move_right(char **array, int i, int j, char *str);
int move_left(char **array, int i, int j, char *str);
int move_up(char **array, int i, int j, char *str);
int move_down(char **array, int i, int j, char *str);
int check_bad_file(char *filepath) ;
void window(char **array, int key, char *str);
int count_nbr_O(char *str);
