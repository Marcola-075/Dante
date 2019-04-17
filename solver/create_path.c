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
    if (stat->map[stat->y + 1] != NULL &&
        stat->map[stat->y + 1][stat->x] == '*') {
        stat->map = go_down(stat);
        return (stat->map);
    }
    if (stat->map[stat->y][stat->x + 1] != '\0' &&
        stat->map[stat->y][stat->x + 1] == '*') {
        stat->map = go_right(stat);
        return (stat->map);
    }
    if (stat->y - 1 >= 0 && stat->map[stat->y - 1][stat->x] == '*') {
        stat->map = go_up(stat);
        return (stat->map);
    }
    if (stat->x - 1 >= 0 && stat->map[stat->y][stat->x - 1] == '*') {
        stat->map = go_left(stat);
        return (stat->map);
    }
    return (stat->map);
}
