/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** my.h
*/

#ifndef MY_H
#define MY_H

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include "graph.h"

typedef struct stac stac;
struct stac
{
    int y;
    int x;
    stac *next;
};

typedef struct status
{
    int x;
    int y;
    int x_max;
    int y_max;
    char **map;
}status;

typedef struct list
{
    char **(*fonc)(status *stat);
} list;

int my_strlen(char const *str);
void my_usage(void);
int my_strcmp(char const *sone, char const *stwo);
int my_putstr(char const *str);
int    my_getnbr(char const *str);
int    my_put_nbr(int nb);
void my_puttab(char **tab, char sep);
char *my_realloc(char *str, char *str_two, int i, int y);
int my_tablen(char **tab);
char **put_in_tab(char *str, char sep);
char *my_cat(char *filepath);
int    my_str_isalpha(char const *str);
int    my_str_isnum(char const *str);
void my_gen(int x, int y, int perfect);
int check_nbr(int ac, char **av);
int my_random(int nb_max);
char **maze_gen(char **base);
list *create_list(list *fcnt, status stat);
int list_len(status *stat);
char **go_down(status *stat);
char **go_up(status *stat);
char **go_right(status *stat);
char **go_left(status *stat);
char **create_path(status *stat, list *fcnt);
void put_in_list(stac **list, int y, int x);
void disp_list(stac *list);
void remove_frst_elem(stac **list);
char **place_exit_two(char **map);
int check_exit_line(char *line);
int check_rigth(char **map);
char **imperfect_maze(char **map);
void disp_maze(char **maze);

#endif
