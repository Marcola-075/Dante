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
    int i = 0;

    while (42) {
        i = my_random(4);
        if (i == 0 && stat->map[stat->y + 1] != NULL &&
            stat->map[stat->y + 2] != NULL &&
            stat->map[stat->y + 2][stat->x] == 'O')
            return (fcnt[i].fonc(stat));
        if (i == 1 &&stat->y - 1 > 0 && stat->y - 2 >= 0 &&
            stat->map[stat->y - 2][stat->x] == 'O')
            return (fcnt[i].fonc(stat));
        if (i == 2 && stat->map[stat->y][stat->x + 1] != '\0' && stat->map[stat->y]
            [stat->x + 2] != '\0' && stat->map[stat->y][stat->x + 2] == 'O')
            return (fcnt[i].fonc(stat));
        if (i == 3 && stat->x - 1 > 0 && stat->x - 2 >= 0 &&
            stat->map[stat->y][stat->x - 2] == 'O')
            return (fcnt[i].fonc(stat));
    }
    return (stat->map);
}
