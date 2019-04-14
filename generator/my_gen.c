/*
** EPITECH PROJECT, 2019
** my_gen
** File description:
** my_gen
*/

#include "my.h"

char **place_exit(char **map)
{
    int y = my_tablen(map) - 1;
    int x = my_strlen(map[y]) - 1;

    map[y][x] = '*';
    map = place_exit_two(map);
    return (map);
}

char *my_wall(char *line, int x)
{
    int i = 0;

    line = malloc(sizeof(char) * (x + 1));
    while (i != x) {
        line[i] = 'X';
        i = i + 1;
    }
    line[i] = '\0';
    return (line);
}

char *my_pass(char *line, int x)
{
    int i = 0;
    int pass = 0;

    line = malloc(sizeof(char) * (x + 1));
    while (i != x) {
        if (pass == 0) {
            line[i] = 'O';
            pass = 1;
        }
        else {
            line[i] = 'X';
            pass = 0;
        }
        i = i + 1;
    }
    line[i] = '\0';
    return (line);
}

char **base_gen(char **map, int y, int x)
{
    int i = 0;
    int pass = 0;

    map = malloc(sizeof(char *) * (y + 1));
    while (i != y) {
        if (pass == 0) {
            map[i] = my_pass(map[i], x);
            pass = 1;
        }
        else {
            map[i] = my_wall(map[i], x);
            pass = 0;
        }
        i = i + 1;
    }
    map[i] = NULL;
    map[0][0] = '*';
    return (map);
}

void my_gen(int x, int y, int perfect)
{
    char **map = NULL;

    map = base_gen(map, y, x);
    map = maze_gen(map);
    map = place_exit(map);
    if (perfect == 0)
        map = imperfect_maze(map);
    disp_maze(map);
}
