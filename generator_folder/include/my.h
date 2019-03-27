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
#endif
