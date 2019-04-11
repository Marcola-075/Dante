/*
** EPITECH PROJECT, 2019
** create
** File description:
** path
*/

#include "my.h"

char **go_down(status *stat)
{
    stat->map[stat->y + 1][stat->x] = '*';
    stat->map[stat->y + 2][stat->x] = '*';
    stat->y += 2;
    return (stat->map);
}

char **go_up(status *stat)
{
    stat->map[stat->y - 1][stat->x] = '*';
    stat->map[stat->y - 2][stat->x] = '*';
    stat->y -= 2;
    return (stat->map);
}

char **go_right(status *stat)
{
    stat->map[stat->y][stat->x + 1] = '*';
    stat->map[stat->y][stat->x + 2] = '*';
    stat->x += 2;
    return (stat->map);
}

char **go_left(status *stat)
{
    stat->map[stat->y][stat->x - 1] = '*';
    stat->map[stat->y][stat->x - 2] = '*';
    stat->x -= 2;
    return (stat->map);
}

char **create_path(status *stat, list *fcnt)
{
    stat->map = fcnt[my_random(list_len(stat))].fonc(stat);
    return (stat->map);
}
