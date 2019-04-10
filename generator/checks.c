/*
** EPITECH PROJECT, 2019
** checks
** File description:
** checks
*/

#include "my.h"

int check_nbr(int ac, char **av)
{
    if (ac < 3 || ac > 4 || my_str_isnum(av[1]) != 1
        || my_str_isnum(av[2]) != 1) {
	write(2, "Error: expected <'int' x> <'int' y>.\n", 37);
        return (84);
    }
    if (my_getnbr(av[1]) < 1 || my_getnbr(av[2]) < 1) {
        write(2, "Error: the two arguments must be positive.\n", 43);
        return (84);
    }
    return (0);
}
