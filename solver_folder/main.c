/*
** EPITECH PROJECT, 2019
** main
** File description:
** main
*/

#include "my.h"

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
    return (0);
}
