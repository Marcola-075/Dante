/*
** EPITECH PROJECT, 2019
** clearmap
** File description:
** clear
*/

#include "my.h"

char *clear_line(char *line)
{
    int i = 0;

    while (line[i] != '\0') {
        if (line[i] == '.')
            line[i] = '*';
        i = i + 1;
    }
    return (line);

}

char **clear_map(char **maze)
{
    int i = 0;

    while (maze[i] != NULL) {
        maze[i] = clear_line(maze[i]);
        i = i + 1;
    }
    return (maze);
}
