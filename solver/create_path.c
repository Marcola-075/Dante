/*
** EPITECH PROJECT, 2019
** create
** File description:
** path
*/

#include "my.h"

char **go_down(status *stat)
{
    stat->map[stat->y + 1][stat->x] = 'o';
    stat->y += 1;
    return (stat->map);
}

char **go_up(status *stat)
{
    stat->map[stat->y - 1][stat->x] = 'o';
    stat->y -= 1;
    return (stat->map);
}

char **go_right(status *stat)
{
    stat->map[stat->y][stat->x + 1] = 'o';
    stat->x += 1;
    return (stat->map);
}

char **go_left(status *stat)
{
    stat->map[stat->y][stat->x - 1] = 'o';
    stat->x -= 1;
    return (stat->map);
}

char **create_path(status *stat, list *fcnt)
{
    stat->map = fcnt[my_random(list_len(stat))].fonc(stat);
    return (stat->map);
}
