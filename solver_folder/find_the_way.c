/*
** EPITECH PROJECT, 2019
** find_the_way
** File description:
** find the way to the end
*/

#include "include/my.h"

int go_down(char **maze, static int x, static int y, char **av)
{
    y = y - 1;
    if (check_path(maze, x, y, av) == 84 || dead_end(maze, x, y, av) == 84) {
        y = y + 1;
        backtrack(maze, x, y, av);
        return (-1);
    }
    return (y);
}

char **go_right(char **maze, static int x, static int y, char **av)
{
    x = x + 1;
    if (check_path(maze, x, y, av) == 84 || dead_end(maze, x, y, av) == 84) {
        x = x - 1;
        backtrack(maze, x, y, av);
        return (-1);
    }
    return (maze);
}

int go_up(char **maze, static int x, static int y, char **av)
{
    y = y + 1;
    if (check_path(maze, x, y, av) == 84 || dead_end(maze, x, y, av) == 84) {
        y = y - 1;
        backtrack(maze, x, y, av);
        return (-1);
    }
    return (y);
}

char **go_left(char **maze, static int x, static int y, char **av)
{
    x = x - 1;
    if (check_path(maze, x, y, av) == 84 || dead_end(maze, x, y, av) == 84) {
        x = x + 1;
        backtrack(maze, x, y, av);
        return (-1);
    }
    return (maze);
}

char **find_path(char **maze, static int x, static int y, char **av)
{
    int n = my_getnbr(av[1]);
    int i = my_getnbr(av[2]);

    if (maze[y][x] != maze[i][n]) {
        go_down(maze, x, y, av); 
        if (go_down(maze, x, y, av) == -1) {
            backtrack(maze, x, y, av);
            maze = find_path(maze, x, y, av);
        }
        go_right(maze, x, y, av);
        if (go_right(maze, x, y, av) == -1) {
            backtrack(maze, x, y, av);
            maze = find_path(maze, x, y, av);
        }
        go_up(maze, x, y, av);
        if (go_up(maze, x, y, av) == -1) {
            backtrack(maze, x, y, av);
            maze = find_path(maze, x, y, av);
        }
        go_left(maze, x, y, av);
        if (go_left(maze, x, y, av) == -1) {
            backtrack(maze, x, y, av);
            maze = find_path(maze, x, y, av);
        }
        maze = find_path(maze, y, x, av);
    }
    else if (maze[y][x] == maze[i][n])
        return (maze);
}
