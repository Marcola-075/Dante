/*
** EPITECH PROJECT, 2019
** main
** File description:
** main
*/

#include "my.h"

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
}

int main(int ac, char **av)
{
    char **map = NULL;

    if (ac == 2 && my_strcmp("-h", av[1]) == 0)
        return (0);
    if (ac > 2) {
        write(2, "Error: You must give only one map.\n", 35);
        return (84);
    }
    map = check_file(av[1]);
    if (map == NULL)
        return (84);
    find_path
    return (0);
}
