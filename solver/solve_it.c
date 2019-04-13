/*
** EPITECH PROJECT, 2019
** solver
** File description:
** ia to solve the map
*/

#include "../include/my.h"

char **backtrack(char **maze, int x, int y, char **av)
{
    stac* stack;

    maze[y][x] = ',';
    stack->x = x;
    stack->y = y;
    stack->next = NULL;
    return (maze);
}

int dead_end(char **maze, int x, int y, char **av)
{
    int n = my_getnbr(av[1]);
    int i = my_getnbr(av[2]);

    if (maze[y+1][x] == 'X' && maze[y-1][x] == 'X' && maze[y][x+1] == 'X')
        return (84);
    if (maze[y-1][x] == 'X' && maze[y][x+1] == 'X' && maze[y][x-1] == 'X')
        return (84);
    if (maze[y+1][x] == 'X' && maze[y-1][x] == 'X' && maze[y][x-1] == 'X')
        return (84);
    if (maze[y-1][x] == 'X' && maze[y][x+1] == 'X' && maze[y][x-1] == 'X')
        return (84);
    return (0);
}

int check_path(char **maze, char **av)
{
    int x = 0;
    int y = 0;
    int n = my_getnbr(av[1]);
    int i = my_getnbr(av[2]);

    while (maze[y][x] != maze[i][n]) {
        if (x < 0 || y < 0 || x > n || y > i)
            return (84);
        if (x == n && y == i)
            return (0);
    }
    return (0);
}
