/*
** EPITECH PROJECT, 2019
** maze
** File description:
** gen
*/

#include "my.h"

status ini_struct(status stat, char **base)
{
    stat.y = 0;
    stat.x = 0;
    stat.y_max = my_tablen(base);
    stat.x_max = my_strlen(base[0]);
    stat.map = base;
    return (stat);
}

char **maze_gen(char **base)
{
    status stat = ini_struct(stat, base);
    list *fcnt = NULL;
    stac *list = NULL;
    int i = 1;

    while (list_len(&stat) != 0) {
        fcnt = create_list(fcnt, stat);
        stat.map = create_path(&stat, fcnt);
    }
    return (stat.map);
}
