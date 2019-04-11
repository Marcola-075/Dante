/*
** EPITECH PROJECT, 2019
** solver
** File description:
** ia to solve the map
*/

#include "../include/my.h"

int line_path(char **maze, int x, int y, char **av)
{
    int n = my_getnbr(av[1]);
    int i = my_getnbr(av[2]);

    if (maze[y][x-1] == 'X' && maze[y][x+1] == 'X' &&
        maze[y-1][x])
}

int current_pos(char **maze, int x, int y, char **av)
{
    if (maze[y][x] == 'X')
        backtrack(maze, x, y);
}

int dead_end(char **maze, int x, int y, char **av)
{
    int n = my_getnbr(av[1]);
    int i = my_getnbr(av[2]);

    if (maze[y+1][x] == 'X' && maze[y-1][x] == 'X' && maze[y][x+1] == 'X') // coin en D
        maze = backtrack(maze, x, y);
    if (maze[y-1][x] == 'X' && maze[y][x+1] == 'X' && maze[y][x-1] == 'X') // coin en U
        maze = backtrack(maze, x, y);
    if (maze[y+1][x] == 'X' && maze[y-1][x] == 'X' && maze[y][x-1] == 'X') // coin en C
        maze = backtrack(maze, x, y);
    if (maze[y-1][x] == 'X' && maze[y][x+1] == 'X' && maze[y][x-1] == 'X') // coin en A
        maze = backtrack(maze, x, y);
}

int find_path(char **maze, int x, int y, char **av)
{
    
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
        find_path(maze, x, y, av);
}
