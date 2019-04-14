/*
** EPITECH PROJECT, 2019
** check
** File description:
** file
*/

#include "my.h"

int check_line(char *line, int len)
{
    int i = 0;

    if (my_strlen(line) != len)
        return (-1);
    while (line[i] != '\0') {
        if (line[i] != 'X' && line[i] != '*')
            return (-1);
        i = i + 1;
    }
    return (0);
}

char **check_map(char **map, char *strmap)
{
    int i = 0;

    if (strmap[0] == '\0') {
        write(2, "Error: this map is empty.\n", 26);
        return (NULL);
    }
    while (map[i] != NULL) {
        if (check_line(map[i], my_strlen(map[0])) == -1) {
            write(2, "Error: Invalid map.\n", 20);
            return (NULL);
        }
        i = i + 1;
    }
    return (map);
}

char **check_file(char *filepath)
{
    int fd = 0;
    char **tab = NULL;

    if (filepath == NULL) {
        write(2, "Error: you must give a map.\n", 28);
        return (NULL);
    }
    fd = open(filepath, O_RDONLY);
    if (fd < 1) {
        write(2, "Error: this file doesn't exist.\n", 32);
        return (NULL);
    }
    tab = put_in_tab(my_cat(filepath), '\n');
    tab = check_map(tab, my_cat(filepath));
    if (tab[0][0] != '*' ||
        tab[my_tablen(tab) - 1][my_strlen(tab[0]) -1 ] != '*') {
        my_putstr("no solution found\n");
        return (NULL);
    }
    tab[0][0] = 'o';
    return (tab);
}
