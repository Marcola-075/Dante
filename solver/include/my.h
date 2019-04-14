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

typedef struct stac stac;
struct stac
{
    int y;
    int x;
    int inter;
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
int my_random(int nb_max);
int    my_getnbr(char const *str);
int    my_put_nbr(int nb);
void my_puttab(char **tab, char sep);
char *my_realloc(char *str, char *str_two, int i, int y);
int my_tablen(char **tab);
char **put_in_tab(char *str, char sep);
char *my_cat(char *filepath);
int    my_str_isalpha(char const *str);
int    my_str_isnum(char const *str);
char **check_file(char *filepath);
void my_solver(char **map);
char **go_down(status *stat);
char **go_up(status *stat);
char **go_left(status *stat);
char **go_right(status *stat);
char **create_path(status *stat, list *fcnt);
int list_len(status *stat);
list *create_list(list *fcnt, status stat);
void put_in_list(stac **list, int y, int x, int inter);
void remove_frst_elem(stac **list);
char **clear_map(char **maze);
void disp_maze(char **maze);
int count_pass(char **map);

#endif
