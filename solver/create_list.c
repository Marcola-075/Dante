/*
** EPITECH PROJECT, 2019
** create_list
** File description:
** list
*/

#include "my.h"

int list_len(status *stat)
{
    int len = 0;

    if (stat->map[stat->y + 1] != NULL &&
        stat->map[stat->y + 1][stat->x] == '*')
        len += 1;
    if (stat->y - 1 >= 0 && stat->map[stat->y - 1][stat->x] == '*')
        len += 1;
    if (stat->map[stat->y][stat->x + 1] != '\0' &&
        stat->map[stat->y][stat->x + 1] == '*')
	len += 1;
    if (stat->x - 1 >= 0 && stat->map[stat->y][stat->x - 1] == '*')
        len += 1;
    return (len);
}

list *create_list_two(list *fcnt, status stat, int i)
{
    if (stat.map[stat.y][stat.x + 1] != '\0' &&
        stat.map[stat.y][stat.x + 1] == '*') {
        fcnt[i].fonc = &go_right;
        i += 1;
    }
    if (stat.x - 1 >= 0 &&
        stat.map[stat.y][stat.x - 1] == '*') {
        fcnt[i].fonc = &go_left;
	i += 1;
    }
    return (fcnt);
}

list *create_list(list *fcnt, status stat)
{
    int i = 0;

    fcnt = malloc(sizeof(list) * (list_len(&stat) + 1));
    if (stat.map[stat.y + 1] != NULL &&
        stat.map[stat.y + 1][stat.x] == '*') {
        fcnt[i].fonc = &go_down;
        i += 1;
    }
    if (stat.y - 1 >= 0 && stat.map[stat.y - 1][stat.x] == '*') {
        fcnt[i].fonc = &go_up;
        i += 1;
    }
    return (create_list_two(fcnt, stat, i));
}
