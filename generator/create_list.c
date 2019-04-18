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

    if (stat->map[stat->y + 1] != NULL && stat->map[stat->y + 2] != NULL &&
        stat->map[stat->y + 2][stat->x] == 'O')
        len += 1;
    if (stat->y - 1 > 0 && stat->y - 2 >= 0 &&
        stat->map[stat->y - 2][stat->x] == 'O')
        len += 1;
    if (stat->map[stat->y][stat->x + 1] != '\0' && stat->map[stat->y]
        [stat->x + 2] != '\0' && stat->map[stat->y][stat->x + 2] == 'O')
        len += 1;
    if (stat->x - 1 > 0 && stat->x - 2 >= 0 &&
        stat->map[stat->y][stat->x - 2] == 'O')
        len += 1;
    return (len);
}

list *create_list(list *fcnt, status stat)
{
    int i = 0;

    fcnt = malloc(sizeof(list) * 5);
    fcnt[0].fonc = &go_down;
    fcnt[1].fonc = &go_up;
    fcnt[2].fonc = &go_right;
    fcnt[3].fonc = &go_left;
    return (fcnt);
}
