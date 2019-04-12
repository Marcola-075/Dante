/*
** EPITECH PROJECT, 2019
** imperfect
** File description:
** maze
*/

#include "my.h"

void check_build(char **map, stac **list, int i)
{
    int y = 0;

    while (map[i][y] != '\0') {
        if (map[i][y] == 'X' &&
            ((i - 1 >= 0 && map[i - 1][y] == '*') &&
             (i + 1 < my_tablen(map) && map[i + 1][y] == '*') ||
             (y - 1 >= 0 && map[i][y - 1] == '*') &&
             (y + 1 < my_strlen(map[i]) && map[i][y + 1] == '*')))
            put_in_list(list, i, y);
        y = y + 1;
    }
}

char **destroy_wall(char **map, stac *list, int *nb)
{
    stac *new = NULL;
    int rand = 0;

    new = list;
    while (new != NULL) {
        rand = my_random(5);
        if (rand == 1) {
            map[new->y][new->x] = '*';
            (*nb) = (*nb) + 1;
        }
        new = new->next;
    }
    return (map);
}

char **special_case(char **map)
{
    int y = my_tablen(map);
    int x = my_strlen(map[0]);
    char **new_tab = malloc(sizeof(char *) * y + 1);
    int rand = my_random(2);

    if (y == 2 && x == 2) {
        new_tab[0] = "**";
        new_tab[1] = "**";
        new_tab[2] = NULL;
        return (new_tab);
    }
    if (y == 2 && x > 2) {
        if (map[1][x - 2] = 'X')
            map[1][x - 2] = '*';
        else if (map[0][x - 1] == 'X')
            map[0][x - 1] = '*';
            }
    return (map);
    
}

char **imperfect_maze(char **map)
{
    stac *list = NULL;
    int i = 0;
    int nb = 0;
    
    while (map[i] != NULL) {
        check_build(map, &list, i);
        i = i + 1;
    }
    if (list == NULL)
        return (special_case(map));
    while (nb == 0) {
        map = destroy_wall(map, list, &nb);
    }
    return (map);
}
