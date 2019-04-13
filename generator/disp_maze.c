/*
** EPITECH PROJECT, 2019
** disp_maze
** File description:
** maze
*/

#include "my.h"

void disp_maze(char **maze)
{
    int i = 0;

    while (maze[i + 1] != NULL) {
        my_putstr(maze[i]);
        my_putstr("\n");
        i = i + 1;
    }
    my_putstr(maze[i]);
}
