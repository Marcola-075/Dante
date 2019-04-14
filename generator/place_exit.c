/*
** EPITECH PROJECT, 2019
** place_exit
** File description:
** exit
*/

#include "my.h"

int check_exit_line(char *line)
{
    char *str = malloc(sizeof(char) * my_strlen(line) + 1);
    int i = 0;

    while (i != my_strlen(line) - 1) {
        str[i] = 'X';
        i = i + 1;
    }
    str[i] = '*';
    str[i + 1] = '\0';
    if (strcmp(str, line) == 0)
        return (84);
    return (0);
}

int check_rigth(char **map)
{
    int i = 0;

    while (map[i + 1] != NULL) {
        if (map[i][my_strlen(map[i]) - 1] != 'X')
            return (0);
        i = i + 1;
    }
    if (map[i][my_strlen(map[i]) - 1] != '*')
        return (0);
    return (84);
}

char **place_exit_two(char **map)
{
    int y = my_tablen(map) - 1;
    int x = my_strlen(map[y]) - 1;
    int rand = my_random(2);

    if (check_exit_line(map[my_tablen(map) - 1]) == 84 &&
        check_rigth(map) == 84) {
        if (rand == 0 && y - 1 >= 0)
            map[y - 1][x] = '*';
        else if (rand == 0 && x - 1 >= 0)
            map[y][x - 1] = '*';
        if (rand == 1 && x - 1 >= 0)
            map[y][x - 1] = '*';
        else if (rand == 1 && y - 1 >= 0)
            map[y - 1][x] = '*';
    }
    return (map);
}
