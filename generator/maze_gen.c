/*
** EPITECH PROJECT, 2019
** maze
** File description:
** gen
*/

#include "my.h"

int count_o(char *line)
{
    int i = 0;
    int nb = 0;

    while (line[i] != '\0') {
        if (line[i] == 'O')
            nb = nb + 1;
        i = i + 1;
    }
    return (nb);
}

int check_end(char **map)
{
    int nb = 0;
    int i = 0;

    while (map[i] != NULL) {
        nb += count_o(map[i]);
        i = i + 1;
    }
    return (nb);
}

void give_new_pos(status *stat, stac *list)
{
    if (list != NULL) {
        stat->y = list->y;
        stat->x = list->x;
        return;
    }
    stat->y = 0;
    stat->x = 0;
    return;
}

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

    while (check_end(stat.map) != 0) {
        if (list_len(&stat) != 0) {
            fcnt = create_list(fcnt, stat);
            stat.map = create_path(&stat, fcnt);
            put_in_list(&list, stat.y, stat.x);
        }
        else {
            remove_frst_elem(&list);
            give_new_pos(&stat, list);
        }
    }
    return (stat.map);
}
